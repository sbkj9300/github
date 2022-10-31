import java.io.*;

class sample4{
	public static void main(String[] args) throws IOException{
		System.out.println("三角形の高さと底辺を入力してください。");
	
		BufferedReader br =
	 	 new BufferedReader (new InputStreamReader(System.in));
	 	 
	 	 String num1 = br.readLine();
	 	 String num2 = br.readLine();
	 	 
	 	 double height = Integer.parseInt(num1);
	 	 double bottom = Integer.parseInt(num2);
	 	 
	 	 double area = height*bottom/2;
	 	 
	 	 System.out.println("三角形の面積は"+ area +"です。");
	 	 
	 	}
	}
	 	 