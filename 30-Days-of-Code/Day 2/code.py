#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(meal_cost, tip_percent, tax_percent):
    tip_percent=meal_cost*(tip_percent/100)
    tax_percent=meal_cost*(tax_percent/100)
    total=tax_percent+tip_percent+meal_cost
    round_cost = int(round(total, 0))
    print(round_cost)
    

if __name__ == '__main__':
    meal_cost = float(input())

    tip_percent = int(input())

    tax_percent = int(input())

    solve(meal_cost, tip_percent, tax_percent)
