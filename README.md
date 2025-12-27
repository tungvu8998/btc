
public class Cau1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        BigInteger tong = new BigInteger("0");
        BigInteger tich = new BigInteger("1");
        while (sc.hasNext()) {
            BigInteger x = sc.nextBigInteger();
            tong = tong.add(x);
            tich = tich.multiply(x);        
        }
        System.out.println(tong);
        System.out.println(tich);

    }
    
}

public class Cau2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {

        ObjectInputStream in = new ObjectInputStream(new BufferedInputStream(new FileInputStream("DATA.in")));

        ArrayList<String> list = (ArrayList<String>) in.readObject();

        TreeSet<Integer> st = new TreeSet<>();

        for (String x : list) {
            Scanner sc = new Scanner(x);
            while (sc.hasNext()) {
                try {
                    int n = Integer.parseInt(sc.next());
                    st.add(n);

                } catch (Exception e) {

                }
            }

        }
        for (Integer n : st) {
            System.out.println(n);
        }

    }

}

public class Cau3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner (new File("DATA.in"));
        long sum = 0; String s = "";
        while(sc.hasNext()){
            try{      
                s = sc.next();
                int n = Integer.parseInt(s);
            }catch(NumberFormatException e1){
                try{
                    long x = Long.parseLong(s);
                    sum += x;
                }
                catch(Exception e2){}
            }
        }
        System.out.println(sum);
    }
    
}


public class Cau4 {

    /**
     * @param args the command line arguments
     */
   public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DAYSO.in"));
        int t = Integer.parseInt(in.nextLine());
        while(t-->0){
            int n = in.nextInt();
            int[] a = new int[n];
            HashMap<Integer,Integer> map = new HashMap<>();
            ArrayList<Integer> arr = new ArrayList<>();
            for(int i=0;i<n;i++){
                a[i] = in.nextInt();
                if(map.containsKey(a[i])){
                    map.put(a[i],map.get(a[i])+1);
                }else{
                    map.put(a[i],1);
                    arr.add(a[i]);
                }
            }
            Collections.sort(arr,new Comparator<Integer>(){
                public int compare(Integer a, Integer b){
                    return map.get(b)- map.get(a);
                }
            });
            for(Integer x : arr){
                if(map.get(x) != 0){
                    int y = map.get(x);
                    while(y-->0){
                            System.out.print(x + " ");
                    }
                    map.put(x,0);
                }
            }
            System.out.println();
        }
    } 
    
}
public class Cau5 {

    /**
     * @param args the command line arguments
     */
      public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        ArrayList<SinhVien> ds = new ArrayList<>();
        while (sc.hasNextLine()){
            ds.add(new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(ds);
        for (SinhVien sv: ds){
            System.out.println(sv);
        }
    }
}
class SinhVien implements Comparable<SinhVien> {
    private String maSV, hoTen, lop, email, sdt;
    public SinhVien(String maSV, String hoTen, String lop, String email, String sdt) {
        this.maSV = maSV;
        this.hoTen = hoTen;
        this.lop = lop;
        this.email = email;
        this.sdt = "0" + sdt;
    }
    @Override
    public String toString() {
        return maSV + " " + hoTen + " " + lop + " " + email + " " + sdt;
    }
    @Override
    public int compareTo(SinhVien o) {
        if(this.lop.compareTo(o.lop) != 0){
            return this.lop.compareTo(o.lop);
        }
        return this.maSV.compareTo(o.maSV);
    }
}


public class Cau6 {

    /**
     * @param args the command line arguments
     * @throws java.io.FileNotFoundException
     */
    public static void main(String[] args) throws IOException {
        try (Scanner sc = new Scanner(new File("LUYENTAP.in"))) {
            int n = Integer.parseInt(sc.nextLine());
            ArrayList<SinhVien> ds = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                String hoTen = sc.nextLine();
                String line = sc.nextLine();
                String[] parts = line.split(" ");
                int baiDung = Integer.parseInt(parts[0]);
                int submit = Integer.parseInt(parts[1]);
                ds.add(new SinhVien(hoTen, baiDung, submit));
            }
            Collections.sort(ds);
            for (SinhVien sv: ds){
                System.out.println(sv);
            }
        }
    }
}

    
class SinhVien implements Comparable<SinhVien> {

        String hoTen;
        int baiDung, submit;

        public SinhVien(String hoTen, int baiDung, int submit) {
            this.hoTen = hoTen;
            this.baiDung = baiDung;
            this.submit = submit;
        }

        @Override

        public String toString() {
            return hoTen + " " + baiDung + " " + submit;
        }

        @Override
    public int compareTo(SinhVien o) {
        // Sắp xếp theo số bài làm đúng (nhiều hơn xếp trước)
        if (this.baiDung != o.baiDung) {
            return Integer.compare(o.baiDung, this.baiDung); // Descending
        }
        // Nếu cùng số bài làm đúng, ưu tiên sinh viên có số lượt submit ít hơn
        if (this.submit != o.submit) {
            return Integer.compare(this.submit, o.submit); // Ascending
        }
        // Nếu cùng hạng, sắp xếp theo họ tên theo thứ tự từ điển
        return this.hoTen.compareTo(o.hoTen);
    }
    }



public class Bai7 {
    public static void main(String[] args) throws IOException {
        try (Scanner sc = new Scanner(System.in)) {
            int n = Integer.parseInt(sc.nextLine());
            ArrayList<MonHoc> ds = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                String maMon = sc.nextLine();
                String tenMon = sc.nextLine();
                String hinhThucThi = sc.nextLine();
                ds.add(new MonHoc(maMon, tenMon, hinhThucThi));
            }
            Collections.sort(ds);
            for (MonHoc mh : ds) {
                System.out.println(mh);
            }
        }
    }
}

class MonHoc implements Comparable<MonHoc> {
    private String maMon;
    private String tenMon;
    private String hinhThucThi;
    
    public MonHoc(String maMon, String tenMon, String hinhThucThi) {
        this.maMon = maMon;
        this.tenMon = tenMon;
        this.hinhThucThi = hinhThucThi;
    }
    
    @Override
    public String toString() {
        return maMon + " " + tenMon + " " + hinhThucThi;
    }
    
    @Override
    public int compareTo(MonHoc o) {
        // Sắp xếp theo mã môn theo thứ tự từ điển
        return this.maMon.compareTo(o.maMon);
    }
}


public class Bai8 {
    public static void main(String[] args) throws IOException {
        try (Scanner sc = new Scanner(System.in)) {
            int n = Integer.parseInt(sc.nextLine());
            ArrayList<HoaDon> ds = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                String maMatHang = sc.nextLine();
                String tenMatHang = sc.nextLine();
                int soLuong = Integer.parseInt(sc.nextLine());
                long donGia = Long.parseLong(sc.nextLine());
                long chietKhau = Long.parseLong(sc.nextLine());
                ds.add(new HoaDon(maMatHang, tenMatHang, soLuong, donGia, chietKhau));
            }
            Collections.sort(ds);
            for (HoaDon hd : ds) {
                System.out.println(hd);
            }
        }
    }
}

class HoaDon implements Comparable<HoaDon> {
    private String maMatHang;
    private String tenMatHang;
    private int soLuong;
    private long donGia;
    private long chietKhau;
    private long tongTien;
    
    public HoaDon(String maMatHang, String tenMatHang, int soLuong, long donGia, long chietKhau) {
        this.maMatHang = maMatHang;
        this.tenMatHang = tenMatHang;
        this.soLuong = soLuong;
        this.donGia = donGia;
        this.chietKhau = chietKhau;
        this.tongTien = donGia * soLuong - chietKhau;
    }
    
    @Override
    public String toString() {
        return maMatHang + " " + tenMatHang + " " + soLuong + " " + donGia + " " + chietKhau + " " + tongTien;
    }
    
    @Override
    public int compareTo(HoaDon o) {
        // Sắp xếp theo tổng tiền giảm dần
        return Long.compare(o.tongTien, this.tongTien);
    }
}
