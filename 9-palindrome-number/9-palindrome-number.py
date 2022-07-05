class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if(x<0):
            return False
        elif x<=9:
            return True
        mylist=[]
        while int(x)>=1:
            mylist.append(int(x%10))
            x=int(x)/10
        
        if len(mylist)==1:
            return True
        k=len(mylist)-1
        for i in range(len(mylist)):
            if mylist[i]!=mylist[k]:
                return False
            k=k-1
        
        return True