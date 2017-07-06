/*only two test cases passed

Printing the granson name with three given first and last name. The last name is the first name of the father.*/

import java.util.*;
import java.lang.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name = sc.nextLine();
		String[] name1 = name.split("\\s+");
		name = sc.nextLine();
		String[] name2 = name.split("\\s+");
		name = sc.nextLine();
		String[] name3 = name.split("\\s+");
		if(!(name1[0].equalsIgnoreCase(name2[1]) && name1[0].equalsIgnoreCase(name3[1]) && (name1[1].equalsIgnoreCase(name2[0]) || name1[1].equalsIgnoreCase(name3[0]))))
		{
		    System.out.print(name1[0]+" "+name1[1]);
		}
		else if(!(name2[0].equalsIgnoreCase(name1[1]+"") && name2[0].equalsIgnoreCase(name3[1]) && (name2[1].equalsIgnoreCase(name1[0]) || name2[1].equalsIgnoreCase(name3[0]))))
		{
		    System.out.print(name2[0]+" "+name2[1]+" ");
		}
		else{
		    System.out.print(name3[0]+" "+name3[1]+"");
		}

	}
}
