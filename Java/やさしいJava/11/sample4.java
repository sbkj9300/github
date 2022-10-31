class car{
	protected int num;
	protected double gass;
	
	public car(){
		System.out.println("車を作成しました。");
		num = 0;
		gass =0.0;
		System.out.println("ナンバーを"+num+"に"+"ガソリン量を"+gass+"にしました。");
	}
	
	public car(int n , double m){
		System.out.println("車を作成しました。");
		num = n;
		gass =m;
		System.out.println("ナンバーを"+num+"に"+"ガソリン量を"+gass+"にしました。");
	}	
	
	public String toString(){
		String str = "ナンバー"+num+"ガソリン量"+gass+"の車です。";
		return str;
	}
}
	
class sample4{
	public static void main(String[] args){
		car car1 = new car(1234,20.5);
		car car2 = new car();
		
		System.out.println(car1);
		System.out.println(car2);
		
	}
}