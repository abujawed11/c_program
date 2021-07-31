R = []
print("Enter the distances covered by racers in Marathon(Kilometers) please (press q to terminate):")
num = input()
while num !='q':
    R.append(float(num))
    num = input()
result = sorted(R)
for i in result:
    if i < 0 :
        print("Invalid Input")
        break
print(result[-4:-7:-1])