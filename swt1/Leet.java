public class Leet {
    private static String[] leetconv = {"1337", "k3wl", "!!!11", "xx", "0rz", "0rz", "n", "3", "7", "0", "@"};
    private static String[] normalwords = {"elite", "cool", "!", "ck", "ers", "er", "en", "e", "t", "o", "a"};
    
    public static String toLeet(String normal) {
        for (int i = 0; i <normalwords.length; i++) {
            normal = normal.replace(normalwords[i], leetconv[i]);
        }
        return normal;

    }
    public static String[] allToLeet(String[] normals) {
        for (int i = 0; i < normals.length; i++) {
            normals[i] = Leet.toLeet(normals[i]);
        }
        return normals;
    }
}
