class MyPoint{

	private int x;
	private int y;
	
	public void setX(int px){
		x=px;
	}
	
	public void setY(int py){
		y=py;
	}
	
	public int getX(){
		return x;
	}
	
	public int getY(){
		return y;
	}
	
	public MyPoint(){
		x=0;
		y=0;
		
	}
	
	public MyPoint(int px,int py){
		x=px;
		y=py;
	}
	
	public void show(){
		System.out.println("座標は"+x+","+y);
	}
}

class sample{
	public static void main(String[] args){
		MyPoint point1=new MyPoint();
		
		point1.show();
		
		MyPoint point2 = new MyPoint(2189,2781);
		
		point2.show();
	}
}
		
		
		
		
		
