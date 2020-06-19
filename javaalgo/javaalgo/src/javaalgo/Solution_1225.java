package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Solution_1225 {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		for (int tc = 0; tc < 10; tc++) {
			int n = Integer.parseInt(br.readLine());
			StringTokenizer st = new StringTokenizer(br.readLine());
			Queue<Integer> q = new LinkedList<>(); // Å¥¼±¾ð

			for (int i = 0; i < 8; i++) {
				q.offer(Integer.parseInt(st.nextToken()));
			}
			int now = 0;
			while (true) {
				for (int i = 1; i <= 5; i++) {
					now = q.peek();
					now = now - i;
					if(now < 0){
						now = 0;
					}
					q.remove();
					q.offer(now);
					if(now == 0){
						break;
					}
					
				}
				if(now == 0){
					break;
				}
				
			}
			
			System.out.print("#"+ n + " ");
			while(!q.isEmpty()){
				System.out.print(q.peek()+ " ");
				q.remove();
			}
		}
	}

}
