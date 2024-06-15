import sqlite3 

def list_all():
    con = sqlite3.connect("emp_db.sqlite3")
    cur = con.cursor()
    sql = "SELECT * FROM employee"
    sqlResult  = cur.execute(sql)
    employee = sqlResult.fetchall()
    print('id\tcode\tname\tjob_title\tsalary')
    for employee in employee:
         print(f'{employee[0]}\t{employee[1]}\t{employee[2]}\t{employee[3]}\t{employee[4]}\t')
    print("\n")

   

def create_person():
    code = input('code:')
    name = input('name:')
    job_title = input('job title:')
    salary=int(input('salary:'))
    con = sqlite3.connect("emp_db.sqlite3")
    cur = con.cursor()
   
    sql = f'''INSERT INTO employee(code,name,job_title,salary)
VALUES('{code}','{name}','{job_title}','{salary}')'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('employee is created successfully.')

def edit_person():
    id = int(input('enter emp id:'))
    con = sqlite3.connect("emp_db.sqlite3")
    cur = con.cursor()
    sql = f"SELECT * FROM employee WHERE id={id}"
    sqlResult  = cur.execute(sql)
    employee = sqlResult.fetchone()
    
    code = input(f'code({employee[1]}):')
    name = input(f'name({employee[2]}):')
    job_title = input(f'job_title({employee[3]}):')
    salary=int(input(f'salary({employee[4]}):'))
    sql = f'''UPDATE employee
SET code='{code}',
    name='{name}',
    job_title='{job_title}',
    salary='{salary}'
WHERE id={id}'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('person is updated successfully.')
    
def delete_person():
    id = int(input('enter person id:'))
    con = sqlite3.connect("emp_db.sqlite3")
    cur = con.cursor()
    sql = f"SELECT * FROM employee WHERE id={id}"
    sqlResult  = cur.execute(sql)
    employee = sqlResult.fetchone()
    
    print(f'code:{employee[1]}:')
    print(f'name:{employee[2]}')
    #sql = '''INSERT INTO people(first_name, last_name)
#VALUES('%s','%s')'''%(first_name,last_name)
    confirm = input('Are you sure to detele(y/n)?')
    if confirm != 'y':
        return
    sql = f'''DELETE FROM employee
WHERE id={id}'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('person is deleted successfully.')


    
def application():
    msg = '''Choices are 
    1-create 
    2-list all
    3-edit
    4-delete
    5-exit app 
    Your Choice:'''
    choice = int(input(msg))
    while(choice!=5):
        if choice == 1:
            create_person() 
        elif choice == 2:
            list_all()
        elif choice == 3:
            edit_person()
        elif choice == 4:
            delete_person()
        choice = int(input(msg))

print('End of people application.')

def login():
    username = input('username:\t')
    password = input('password:\t')
    con = sqlite3.connect("user_db.sqlite3")
    cur = con.cursor()
    sql = f"SELECT * FROM user WHERE username='{username}'"
    sqlResult  = cur.execute(sql)
    user = sqlResult.fetchone()

    if not user:
        print('username/password invalid')
        return 
    
    if user[2] != password:
        print('username/password invalid')
        return
    
    application()
login()


