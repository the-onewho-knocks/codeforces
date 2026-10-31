so we can actually iterate through 2 vectors at the same time using a while loop 
int i = 0;
int j = 0 ;
while(i < n && j < m>){
    condition
}

---

now that im solvig prefix problems from jetbrains now i understand that the prefix array
contains the sum or whatever opration we are performing of the previous ALL elements before it

Why l - 1?

prefix[r] contains the XOR of elements from index 1 to r.

prefix[l - 1] contains the XOR of all elements before index l.

XORing these two removes the elements before l, leaving only the elements from l to r.