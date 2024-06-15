import sqlite3 

def list_all():
    con = sqlite3.connect("sqlite.sqlite3")
    cur = con.cursor()
    sql = "SELECT * FROM person"
    sqlResult  = cur.execute(sql)
    person = sqlResult.fetchall()
    print(person)

def create_person():
    f_name = input('first name:')
    l_name = input('last name:')
    con = sqlite3.connect("sqlite.sqlite3")
    cur = con.cursor()
    #sql = '''INSERT INTO person(first_name, last_name)
#VALUES('%s','%s')'''%(first_name,last_name)
    sql = f'''INSERT INTO person(f_name, l_name)
VALUES('{f_name}','{l_name}')'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('person is created successfully.')

def edit_person():
    id = int(input('enter person id:'))
    con = sqlite3.connect("sqlite.sqlite3")
    cur = con.cursor()
    sql = f"SELECT * FROM person WHERE id={id}"
    sqlResult  = cur.execute(sql)
    person = sqlResult.fetchone()
    
    f_name = input(f'first name({person[1]}):')
    l_name = input(f'last name({person[2]}):')
    #sql = '''INSERT INTO people(first_name, last_name)
#VALUES('%s','%s')'''%(first_name,last_name)
    sql = f'''UPDATE person
SET f_name='{f_name}',
    l_name='{l_name}' 
WHERE id={id}'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('person is updated successfully.')
    
def delete_person():
    id = int(input('enter person id:'))
    con = sqlite3.connect("sqlite.sqlite3")
    cur = con.cursor()
    sql = f"SELECT * FROM person WHERE id={id}"
    sqlResult  = cur.execute(sql)
    person = sqlResult.fetchone()
    
    print(f'first name:{person[1]}:')
    print(f'last name:{person[2]}')
    #sql = '''INSERT INTO people(first_name, last_name)
#VALUES('%s','%s')'''%(first_name,last_name)
    confirm = input('Are you sure to detele(y/n)?')
    if confirm != 'y':
        return
    sql = f'''DELETE FROM person
WHERE id={id}'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('person is deleted successfully.')


    

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