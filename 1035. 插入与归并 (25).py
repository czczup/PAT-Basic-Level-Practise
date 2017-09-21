def insertionSort(alist,blist,clist):
    for index in range(1,len(alist)):
        currentvalue = alist[index]
        position = index
        while position>0 and alist[position-1]>currentvalue:
            alist[position]=alist[position-1]
            position = position-1
        alist[position]=currentvalue
        if alist==blist:
            clist[0] = 1
        if clist == [1] and alist!=blist:
            break

def mergeSort(alist):
    if len(alist)>1:
        mid = len(alist)//2
        lefthalf = alist[:mid]
        righthalf = alist[mid:]
        # mergeSort(lefthalf)
        # mergeSort(righthalf)
        i,j,k=0,0,0
        while i < len(lefthalf) and j < len(righthalf):
            if lefthalf[i] < righthalf[j]:
                alist[k]=lefthalf[i]
                i=i+1
            else:
                alist[k]=righthalf[j]
                j=j+1
            k=k+1

        while i < len(lefthalf):
            alist[k]=lefthalf[i]
            i=i+1
            k=k+1

        while j < len(righthalf):
            alist[k]=righthalf[j]
            j=j+1
            k=k+1


if __name__ == '__main__':
    N = int(input(""))
    sort_before1 = [int(item) for item in input("").split(" ")]
    sort_after1 = [int(item) for item in input("").split(" ")]
    sort_before2 = [item for item in sort_before1]
    sort_after2 = [item for item in sort_after1]
    flag = [0]
    insertionSort(sort_before1,sort_after1,flag)
    if flag[0] == 1:
        print("Insertion Sort")
        print(" ".join([str(i) for i in sort_before1]))
    else:
        mergeSort(sort_after2,)
        print("Merge Sort")
        print(" ".join([str(i) for i in sort_after2]))