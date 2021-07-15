# import necessary libraries
import numpy as np
import cv2
import sys


# function to create the flag of France
def make_france_flag():
    # create a 3 channel numpy array, initially all black
    flag = np.zeros((450, 675, 3), dtype="uint8")

    # populate the array with the correct BGR pixel colors
    for j in range(675):
        for i in range(450):
            if j < 225:
                flag[i, j] = [164, 85, 0]
            elif j < 450:
                flag[i, j] = [255, 255, 255]
            else:
                flag[i, j] = [53, 65, 239]

    # display flag
    cv2.namedWindow('France!')
    cv2.moveWindow('France!', 0, 0)
    cv2.imshow('France!', flag)


# function to create the flag of Italy
def make_italy_flag():
    # create a 3 channel numpy array, initially all black
    flag = np.zeros((450, 675, 3), dtype="uint8")

    # populate the array with the correct BGR pixel colors
    for j in range(675):
        for i in range(450):
            if j < 225:
                flag[i, j] = [69, 140, 0]
            elif j < 450:
                flag[i, j] = [240, 245, 244]
            else:
                flag[i, j] = [42, 33, 205]

    # display flag
    cv2.namedWindow('Italy!')
    cv2.moveWindow('Italy!', 0, 0)
    cv2.imshow('Italy!', flag)


# function to create the flag of Germany
def make_germany_flag():
    # create a 3 channel numpy array, initially all black
    flag = np.zeros((450, 675, 3), dtype="uint8")

    # populate the array with the correct BGR pixel colors
    for j in range(675):
        for i in range(450):
            if 150 < i < 300:
                flag[i, j] = [0, 0, 255]
            elif 300 < i < 450:
                flag[i, j] = [0, 204, 255]

    # display flag
    cv2.namedWindow('Germany!')
    cv2.moveWindow('Germany!', 0, 0)
    cv2.imshow('Germany!', flag)


# function to create the flag of Russia
def make_russia_flag():
    # create a 3 channel numpy array, initially all black
    flag = np.zeros((450, 675, 3), dtype="uint8")

    # populate the array with the correct BGR pixel colors
    for j in range(675):
        for i in range(450):
            if i < 150:
                flag[i, j] = [255, 255, 255]
            elif i < 300:
                flag[i, j] = [160, 50, 0]
            else:
                flag[i, j] = [28, 41, 218]

    # display flag
    cv2.namedWindow('Russia!')
    cv2.moveWindow('Russia!', 0, 0)
    cv2.imshow('Russia!', flag)


# read in flag argument from cpp and call the corresponding function
which_flag = sys.argv[1]
if which_flag == "France":
    make_france_flag()
elif which_flag == "Italy":
    make_italy_flag()
elif which_flag == "Germany":
    make_germany_flag()
elif which_flag == "Russia":
    make_russia_flag()


# continue to display flag until the esc key is pressed
while True:
    k = cv2.waitKey(1)
    if k == 27:
        cv2.destroyAllWindows()
        exit()
