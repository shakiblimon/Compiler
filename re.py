def isPhoneNumber (text):
    if len(text) !=12:
        return  False
    for i in range (0, 3):
        if not text[i].isdecimal():
            return False
    if text[3] != '-':
        return False
    for i in range (4,7):