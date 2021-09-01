package Heartbeat;

public class heartbeat {
	public static void main(String[] args) {
		double time = 0;
		while (true)
		{
			try {
				Thread.sleep(1000);
				time ++;
				System.out.println(time + " sec have elapsed");
			} catch(InterruptedException e) {
				e.printStackTrace();
			}
		} 
	}
}