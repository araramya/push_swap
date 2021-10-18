# push_swap
This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the one (of many) most appropriate solution for an optimized data sorting.

*instructions to run the programm:
- make re
- ./push_swap <arguments>

*instructions to run checkerMAC

- bash
- ARG="1 5 2 4 3"; ./push_swap $ARG | ./checker_OS $ARG"

if it's show you OK everything is fine.

  
  
  ALGORITHM
  If you use this algorithm your final grade will be :
  >700 - in case of 100 numbers
  >9000 - in case of 500 numbers.
  
  1. First of all you need to understand how instructions work:
sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there
       is only one or no elements).
sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there
     is only one or no elements).
ss : sa and sb at the same time.
pa : push a - take the first element at the top of b and put it at the top of a. Do
     nothing if b is empty.
pb : push b - take the first element at the top of a and put it at the top of b. Do
     nothing if a is empty.
ra : rotate a - shift up all elements of stack a by 1. The first element becomes
     the last one.
rb : rotate b - shift up all elements of stack b by 1. The first element becomes
     the last one.
rr : ra and rb at the same time.
rra : reverse rotate a - shift down all elements of stack a by 1. The last element 
      becomes the first one.
rrb : reverse rotate b - shift down all elements of stack b by 1. The last element
      becomes the first one.
rrr : rra and rrb at the same time.
  
  After understanfing it you must write a code for doing it. It will be very easy if you will use linked list but also you can use arrays. I chose linked list.
  
  2. SORT_3
Let's start sorting. In case of 3 numbes you have just six possible options. So just code it without thinking about algorithm. For example you have "1 2 3" numbers your possible options will be:
  1) 1 2 3           4) 3 2 1
  2) 2 1 3           5) 1 3 2
  3) 3 2 1           6) 2 3 1
  
  1) I < II < III -> don't do anything.
  2) III > I > II -> sa
  3) III < II < I -> sa, rra
  4) II < III < I -> ra
  5) I < III < II -> sa, ra
  6) II > I > III -> rra
  
  
  after this you can sort 3 numbers maximum in 2 steps.
  
  
  3. SORT_5
  Now we can think about 5 numbers. How to sort it ?
  Here is my algorithm that you can use for it.
  
  find MIN of a -> MIN to top -> push MIN to b -> find MIN of a -> MIN to top -> push MIN to b -> sort_3 -> pa, pa
  
  
  4. BIG_SORTING
  Let's think what if I have more than 5 numbers ?
  Here is my solution.
  
  1) Create temperary array temp_arr
  2) Copy your a to temp_arr.
  3) Sort temp_arr (Quick-Sort, Merge-sort or even Bubble_Sort it doesn't matter you just need sorted array for future steps)
  4) Take a point which is equal to point = temp_arr[n/3] where n is the number of a which is changing.
  
  then i will use this pseudo code;
  len = 0;
i = 0;
while(i < n)
{
    if(a->top > point && aa->last < point)
    rra;
    elif(a->top < point)
    {
        pb;
        if(sizeof(b) >= 2)
            if(b->top < b->next->top)
            sb;
        len++;
    }
    elif(sizeof(b) > 1 && b->top < b->next->top < b->next->top)
        rr;
    else ra;
    i++;
} 
  
  than check
  if (sizeof(a) == 3)
  sort_3
  elif sizeof(a) > 3
   BIG_SORTING(a,b,n_len) -> Recursion
  
  now you need to sort b and push it to a;
  for that you need to find maximum of b and push it to a, and do it untill b is empty.
  
  THAT'S it, you've done it, CONGRATS !!!!
  
  Don't forget about checkings and leaks.
  
  GOOD LUCK !!!
  Don't forget about checkings and leaks.
