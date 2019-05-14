import.java.util.*
import.java.io.*

class Test
{
static void stack_push(Stack<Integer> stack)
{
  for(int i=0;i<5;i++)
     stack.push(i);
}
static void stack_pop(Stack<Integer> stack)
{
  for(int i =0;i<5;i++)
    Integer y =  (Integer)stack.pop();
    System.out.println(y);
}
static void stack_peek(Stack<Integer> stack)
{
  Integer y = (Integer) stack.peek();
  System.out.println(y);
}
static void stack_search(Stack<Integer> stack,int data)
{
   Integer pos = (Integer) stack.search(data);
   if(pos == -1)
     System.out.println(not found);
   else
      System.out.println(pos);
     
}
public static void main(String[] args)
{
  Stack<Integer> s =  new Stack<Integer>();
  stack_push(s);
  stack_pop(s);
  stack_push(s);
  stack_push(s);
  stack_peek(s);
  stack_pop(s);
  stack_search(s,2);
  stack_search(s,5);
}

}
