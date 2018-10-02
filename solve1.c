//binary to decimal in words
import java.util.*;
import java.lang.Math;
public class Main
{
  public static void main (String[]args)
  {
    Scanner s = new Scanner (System.in);
    int n, rm, p;
      n = s.nextInt ();
    int b[] = new int[n];
    int d[] = new int[n];
    for (int i = 0; i < n; i++)
      {
	b[i] = s.nextInt ();
	  }
    for (int i = 0; i < n; i++)
      {

	    d[i] = 0;
	    p = 0;
	    while (b[i] > 0)
	    {
	     rm = b[i] % 10;
	     d[i] = d[i] + (rm * (int) Math.pow (2, p));
	     b[i] = b[i] / 10;
	     p++;
	    }
     
      }
      
     int d1,du=0;
      
     
        for (int i = 0; i < n; i++)
      {
         d1=d[i];
           while(d1 > 0)
        {
            rm = d1 % 10;
            du = du * 10 + rm;
            d1 = d1 / 10;
        }
		
		
		while (du > 0)
	   {
	      rm = du % 10; 

	    switch (rm)
	      {
	      case 1:
		System.out.print ("One ");
		break;
	      case 2:
		System.out.print ("Two ");
		break;
	      case 3:
		System.out.print ("Three ");
		break;
	      case 4:
		System.out.print ("Four ");
		break;
	      case 5:
		System.out.print ("Five ");
		break;
	      case 6:
		System.out.print ("Six ");
		break;
	      case 7:
		System.out.print ("Seven ");
		break;
	      case 8:
		System.out.print ("Eight ");
		break;
	      case 9:
		System.out.print ("Nine ");
		break;
	      case 0:
		System.out.print ("Zero ");
		break;
	      default:
		System.out.print ("");
		break;
	     }
	      du=du/10;
	   
	  
	  }
	   System.out.println();
     } 
      
  }
}
