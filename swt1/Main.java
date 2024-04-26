public class Main {
    public static void main(String[] args) {
        String[] sentences = {"We are elite hackers!", "informatiker machen coole Sachen!"};
        for (int i = 0; i < sentences.length; i++) {
            System.out.println(sentences[i]);
        }
        sentences = Leet.allToLeet(sentences);
        for (int i = 0; i < sentences.length; i++) {
            System.out.println(sentences[i]);
        }
    }
} 
    

