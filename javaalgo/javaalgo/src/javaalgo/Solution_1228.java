package javaalgo;

import java.util.ArrayList;
import java.util.Scanner;

public class Solution_1228 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		for (int tc = 1; tc <= 10; tc++) {
			ArrayList<Integer> list = new ArrayList<>();
			StringBuilder sb = new StringBuilder();

			int n = sc.nextInt();

			for (int i = 0; i < n; i++) {
				int num = sc.nextInt();
				list.add(num);
			}

			sb.append("#" + tc + " ");

			int comn = sc.nextInt();

			for (int i = 0; i < comn; i++) {
				String c = sc.next();
				int x = sc.nextInt();
				int y = sc.nextInt();

				for (int j = x; j <= y; j++) {
					int nn = sc.nextInt();
					list.add(j, nn);
				}
			}

			for (int i = 0; i < 10; i++) {
				sb.append(list.get(i) + " ");
			}
			System.out.println(list.size());
			System.out.println(sb.toString());
		}
	}
}
