package javaalgo;

import java.util.Scanner;

public class Solution_1217 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n, m;

		for (int i = 1; i <= 10; i++) {
			int num = sc.nextInt();

			n = sc.nextInt();
			m = sc.nextInt();

			int total = 0;
			total = n;
			for (int j = 1; j < m; j++) {
				total *= n;
			}

			System.out.print("#" + num + " ");
			System.out.println(total);
		}
	}

}
