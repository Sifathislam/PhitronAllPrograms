import pyautogui
from time import sleep
sleep(5)

for i in range(0,5):
    pyautogui.write("Hi This is pyautogui And the text is writen by pyautogui",interval= 0.30)
    pyautogui.press('enter')