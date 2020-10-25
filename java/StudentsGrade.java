import java.util.*;
import java.util.Scanner;

class student{
      public int id;
      public String name, grade;
      public double subjects[];
      public double total, percentage;
     
      public student()
      {id=0;
       name=" ";grade=" ";
       subjects=new double[11];
       total=0.0;percentage=0.0;
       }

      
      public void getmarks()
      {
         Scanner sc= new Scanner(System.in);
         System.out.println("Enter Physics Theory Marks (out of 70):");
         subjects[0]=sc.nextDouble();
         System.out.println("Enter Physics Lab Marks (out of 30):");
         subjects[1]=sc.nextDouble();
         System.out.println("Enter Chemistry Theory Marks (out of 100):");
         subjects[2]=sc.nextDouble();
         System.out.println("Enter choise according to subject student have selected:");
         System.out.println("1. Mathematics   2.Biology");
         int choise;choise=sc.nextInt();
         
         switch(choise)
         {
          case 1:System.out.println("Enter Maths Theory Marks (out of 100):");
                 subjects[3]=sc.nextDouble();subjects[4]=-1;subjects[5]=-1;
                 break;
          case 2:System.out.println("Enter Biology Theory Marks (out of 70):");
                 subjects[3]=-1;subjects[4]=sc.nextDouble();
                 System.out.println("Enter Biology Lab Marks (out of 30):");
                 subjects[5]=sc.nextDouble();
                 break;
         }
          System.out.println("Enter English Theory Marks (out of 100):");
         subjects[6]=sc.nextDouble();
         System.out.println("Enter choise according to subject student have selected:");
         System.out.println("1. Computer   2. Physical Education");
         choise=sc.nextInt();
         switch(choise)
         {
          case 1:System.out.println("Enter Computer Theory Marks (out of 60):");
                 subjects[7]=sc.nextDouble();
                 System.out.println("Enter Computer Lab Marks (out of 40):");
                 subjects[8]=sc.nextDouble();
                 subjects[9]=-1;subjects[10]=-1;
                 break;
          case 2:System.out.println("Enter Physical Education Theory Marks (out of 60):");
                 subjects[9]=sc.nextDouble();
                 System.out.println("Enter Physical Education Lab Marks (out of 40):");
                 subjects[10]=sc.nextDouble();
                 subjects[7]=-1;subjects[8]=-1;
                 break;
         }
         for(int i=0;i<11;i++)
              {
               if(subjects[i]!=-1)
                  total=total+subjects[i];
             }
         percentage=total/5.0;
         if(percentage>=80)
            grade = "Honours";
         else if(percentage>=60)
            grade="First Div";
         else if(percentage>=48)
             grade="Second Div";
          else if(percentage>=40)
             grade="Third Div";
          else grade="Failed";
               
                         
      }
      
      public void showdata()
      {
        System.out.println("Student Id :"+id);
        System.out.println("Name of Student :" + name + "\n");
        System.out.println("Physics Theory Marks :" + subjects[0]);
        System.out.println("Physics Lab Marks :" + subjects[1]);
        System.out.println("Chemistry Theory Marks :" + subjects[2]);
        if(subjects[3]!=-1)
            System.out.println("Mathematics Theory Marks :" + subjects[3]);
        else
             {System.out.println("Biology Theory Marks :" + subjects[4]);
              System.out.println("Biology Lab Marks :" + subjects[5]);
             }
        System.out.println("English Theory Marks :" + subjects[6]);
        if(subjects[7]!=-1)
           {System.out.println("Computer Theory Marks :" + subjects[7]);
            System.out.println("Computer Lab Marks :" + subjects[8]);
            }
        else{
             System.out.println("Physical Education Theory Marks :" + subjects[9]);
             System.out.println("Physical Education Lab Marks :" + subjects[10]);
            }
        System.out.print("\n");
        System.out.println("Total Marks :" +total +" / 500");
        System.out.println("Student's Percentage :" + percentage);
        System.out.println("Student has achieved Grade :" + grade);
      }

}

public class StudentsGrade {
	
        
	public static void main(String[] args)throws Exception
	{
            double eng, chem, comp, phy, maths ,pe , bio; int rn=0,i=0,j=0,choise=0;double max=0.0;
	     student st[]=new student[10];student stu = new student();;
        while(choise!=4)
		{Scanner sc = new Scanner(System.in);
                System.out.println("Enter number according to choise :");
                System.out.println("1.Enter Student data , You can Enter maximum 5 Student's data");
                System.out.println("2.Get student with Heighest Percentage");
                System.out.println("3.Get student data by giving Roll.No.");
                System.out.println("4.Exit");
     
                choise=sc.nextInt();
		switch(choise)
		{
                  case 1:System.out.println("Enter Roll.No. of the Student (from 1-5)");
                          rn=sc.nextInt();stu.id=rn;
                         System.out.println("Enter name of the Student");
                         String Name=sc.next();stu.name=Name;st[rn]=stu;
                         st[rn].getmarks();
                         break;
                  case 2: 
                         for(i=1;i<1;i++)
                             {
                              if(max<st[i].percentage)
                                 {max=st[i].percentage;j=i;}
                             }
                         System.out.println("Maximum Prercentage Having Student is:");
                         st[j].showdata();
                         break;
                  case 3: System.out.println("Enter Roll.No. of the student to see data");
                           j=sc.nextInt();
                           st[j].showdata();
                           break;
                }
              }
         }
}


