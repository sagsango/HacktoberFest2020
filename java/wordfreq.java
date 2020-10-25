import java. util. Scanner;

import java.io.*; 
  

class LinkedList { 
  
    Node head; 
  
    
    class Node { 
       
        String word;
        int freq; 
        Node next; 
  
        
        Node(String w,int f) 
        { 
            word=w;freq=f;
            next = null; 
        } 
    } 
  
    
    public  LinkedList insert(LinkedList list,String w,int f) 
    { 
        
        Node new_node = new Node(w,f); 
        new_node.next = null; 
  
        
        if (list.head == null) { 
            list.head = new_node; 
        } 
        else { 
           
            Node last = list.head; 
            while (last.next != null) { 
                last = last.next; 
            } 
  
           
            last.next = new_node; 
        } 
  
        return list; 
    } 
  
    
    public void printList(LinkedList list) 
    { 
        Node currNode = list.head; 
   
        System.out.println("Printing LinkedList: "); 
   
        while (currNode != null) { 
           
            System.out.println("word: " + currNode.word + "   " + "frequency:" + currNode.freq); 
   
            currNode = currNode.next; 
        } 
    } 

}

public class wordfreq
{
    public static void main(String[] args)
    {
        Scanner scan= new Scanner(System.in);
        LinkedList list = new LinkedList(); 
        System.out.println("Enter Paragraph to count frequency of words:");
        String str=scan.nextLine();
        
        String[] s=str.split(" ");  
        
        int count=1;
        
        for(int i=0;i<s.length;i++)
        {
            for(int j=i+1;j<s.length;j++)
            {
              if(s[i].equals(s[j]) && s[i]!="-1")
                {
                     s[j]="-1";
                    count++; 
                }
            }
            
    
            if(count>0 && s[i]!="-1")
            {
                 list= list.insert(list,s[i],count);
                  
                 s[i]="-1";
            }
           
            count=1;
        }

         list.printList(list);
    }
}