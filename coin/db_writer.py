# get data from file and write down in data base
import os 

import sqlite3 
from random import*

#we cant lose these variable 
global db
global sql
db = sqlite3.connect('user_db') #create db
sql = db.cursor()

#create table with 3 columns
sql.execute("""CREATE TABLE IF NOT EXISTS USERS (
  id BIGINT,
  text_code_of_coin TEXT,
  cash BIGINT
)""")#create users

db.commit()

#open file
f = open('coin.txt')
#read file 
for line in f:
	line
#to write coin code in db
text_code_of_coin_for_write_down = line

def insert_in_db(ID):
	sql.execute(f"INSERT INTO users VALUES(?,?,?)",(ID,text_code_of_coin_for_write_down,1))
	db.commit()
	print(text_code_of_coin_for_write_down)

insert_in_db(1)