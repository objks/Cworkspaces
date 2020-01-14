package study.hint.prob09;

public class Exercise9 {
    public static void main(String[] args) {
        int[][] array = {
            { 95, 86, 72 },
            { 83, 90, 95, 87 },
            { 78, 84, 92, 88, 90 },
            { 69, 86, 95 }
        };

        int sum = 0;
        double avg = 0.0;
        int count = 0;		// ÃÑ °¹¼ö

        // ÀÛ¼º À§Ä¡
        for(int i = 0;i < array.length;i++) {			// i : Çà
        	count += array[i].length;
        	for(int j = 0;j < array[i].length;j++) {	// j : ¿­
        		sum += array[i][j];
        	}
        }

        avg = (double)sum / count;
        System.out.println("sum: " + sum);
        System.out.println("avg: " + avg);

    }
}
