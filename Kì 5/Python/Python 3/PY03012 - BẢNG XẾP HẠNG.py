class Student:
    def __init__(self, name, ac, submit):
        self.name = name
        self.ac = ac
        self.submit = submit
    def __str__(self):
        return self.name + " " + str(self.ac) + " " + str(self.submit)
n = int(input())
a = []
for i in range(n):
    name = input()
    ac, submit = map(int, input().split())
    a.append(Student(name, ac, submit))

b = sorted(a, key=lambda x:(-x.ac, x.submit, x.name))
for x in b:
    print(x)
