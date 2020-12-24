from tkinter import *
import requests
import json

root = Tk()

frame1 = Frame(root)
label_city = Label(frame1, height=1, width=6, font=("Comic Sans MS", 30), text='Симферополь', bg='orange', fg='black')
label_weather = Label(frame1, height=1, width=6, font=("Comic Sans MS", 15), text='', bg='orange', fg="black")
frame2 = Frame(root)
label_temp = Label(frame1, height=2, width=6, font=("Comic Sans MS", 70), text='-')
frame3 = Frame(root)
Empty = Label(frame3, height=2, width=6, font=("Comic Sans MS", 20), bg='orange')

Empty.pack(expand=YES, fill=BOTH)
label_city.pack(expand=YES, fill=BOTH)
label_weather.pack(expand=YES, fill=BOTH)
label_temp.pack(expand=YES, fill=BOTH)
frame1.pack(expand=YES, fill=BOTH)
frame2.pack(expand=YES, fill=BOTH)
frame3.pack(expand=YES, fill=BOTH)

def refresh(event):
	global label_city
	global label_weather
	global label_temp
	r = requests.get('http://localhost:3000/raw')
	j = json.loads(r.text)
	label_weather.config(text = j["description"]) 
	label_temp.config(text = str(j["temp"])+'°C')

root.bind('<Button-3>', refresh)

root.mainloop()