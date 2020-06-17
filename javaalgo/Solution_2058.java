package javaalgo;

import java.util.Scanner;

public class Solution_2058 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int nn = n;
		int total  = 0;
		if(n > 1000){
			nn %= 1000; // 789
			n /= 1000; // 6 
			total += n;
			n = nn;
		}
		
		if(n > 100){
			nn %= 100;
			n /= 100;
			total += n;
			n = nn;
		}
		
		if( n > 10) {
			nn  %= 10;
			n /= 10;
			total += n;
			n = nn;
		}
		
		total += n;
		System.out.println(nn);
		System.out.println(n);
		System.out.println(total);
	}

}
