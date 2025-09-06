def addTwoNumbers( l1, l2) :
        n1 = 0
        n2 = 0
        mul1 = 1
        mul2 = 1
        while l1 is not None:
            n1 = n1 + (l1.val * mul1)
            mul1 *= 10
            l1 = l1.next
        while l2 is not None:
            n2 = n2 + (l2.val * mul2)
            mul2 *= 10
            l2 = l2.next
        n4 = n1 + n2
        n3 = str(n4)
        if n3 == "0":
            return ListNode(0)
            
        l3 = None
        for i in range(len(n3)):
            l4 = ListNode(int(n3[i]))
            l4.next = l3
            l3 = l4
            
        return l3