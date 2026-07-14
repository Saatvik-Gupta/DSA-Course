"""
Converting 12 hours format time to 24 hours using string slicing
"""

time=input("Enter the time in 12 format like hour:minute:second AM or PM----")

if( time[-2:]=="AM" and time[:2]=="12" ): # 12:min:secAM remove 12-->00 and AM remove
    print("00"+time[2:-2])

elif( time[-2:]=="AM" ): # 1 to 11:59:59 remove AM only
    print(time[:-2])

elif( time[:2]=="12" and time[-2:]=="PM" ): # 12:min:secPM---> PM remove
    print(time[:-2])

else: # 1PM till 11:59:59PM -->13,14,15,---23
    print( str(int(time[:2])+12) + time[2:-2])






