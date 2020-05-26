class Difference:
    def __init__(self, a):
        self.__elements = a

    # Add your code here
    def computeDifference(self):
        ans=0
        maxx=0
        for i in range(len(self.__elements)):
            for j in range(len(self.__elements)):
                ans=abs(self.__elements[i]-self.__elements[j])
                if ans>maxx:
                    maxx=ans
        self.maximumDifference=maxx


# End of Difference class

_ = input()
a = [int(e) for e in input().split(' ')]

d = Difference(a)
d.computeDifference()

print(d.maximumDifference)
