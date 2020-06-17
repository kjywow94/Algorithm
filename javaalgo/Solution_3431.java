package javaalgo;

import java.util.Scanner;

public class Solution_3431 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int t, l, u, x;

		t = sc.nextInt();

		for (int tc = 1; tc <= t; tc++) {
			l = sc.nextInt();
			u = sc.nextInt();
			x = sc.nextInt();

			int ans = 0;

			System.out.print("#" + tc + " ");
			if (x < l) {
				System.out.println(l - x);
			}
			else if( x > u){
				System.out.println("-1");
			}
			else if(l < x && u > x){
				System.out.println("0");
			}
		}
	}

}
