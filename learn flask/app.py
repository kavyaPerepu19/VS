from flask import Flask, render_template, request
import random
import string

app = Flask(__name__)

def inti():
    x=chr(random.randint(48,57))
    return x
def upper():
    x=chr(random.randint(65,90))
    return x
def lower():
    x=chr(random.randint(97,122))
    return x
def generate_password(length):
    s=""
    for i in range(100):
        ch=random.randint(1,3)
        if ch==1:
            x=inti()
        if ch==2:
            x=upper()
        if ch==3:
            x=lower()
        s+=x
        if len(s)>=length:
            return s
    

@app.route('/', methods=['GET', 'POST'])
def home():
    password = ''
    if request.method == 'POST':
        try:
            length = int(request.form['length'])
            password = generate_password(length)
        except ValueError:
            password = 'Invalid input. Please enter a valid number for length.'
    return render_template('index.html', password=password)

if __name__ == '__main__':
    app.run(debug=True)

