![image](https://github.com/facetint/push_swap/assets/99668549/db5a9637-b074-44c4-969f-6d997c32a10e)


# push_swap
Bu proje, c dilinde olup sınırlı sayıdaki talimatlar ile beraber en az hamle sayısı olacak şekilde sıralama yapılmasını sağlayacaktır.

## Talimatlar 🔁
| Talimatlar | Açıklama |
| :--- | :--- |
| sa | swap a -> a yığınındaki ilk iki elemanının yeri değişir. |
| sb | swap b -> b yığınındaki ilk iki elemanının yeri değişir. |
| ss | swap a ve swap b -> sa ve sb talimatları aynı anda uygulanır. |
| pa | push a ->  b yığınının en üstteki ilk elemanını a yığının en üstüne yerleştirir. |
| pb | push b ->  a yığınının en üstteki ilk elemanını b yığının en üstüne yerleştirir. |
| ra | rotate a -> a yığınındaki ilk eleman yığının en sonuna atılır. |
| rb | rotate b -> b yığınındaki ilk eleman yığının en sonuna atılır. |
| rr | ra ve rb -> ra ve rb talimatları aynı anda uygulanır. |
| rra | reverse rotate a -> a yığınındaki son eleman yığının ilk elemanının yerine geçer. Ve artık ilk eleman haline gelir. |
| rrb | reverse rotate b -> b yığınındaki son eleman yığının ilk elemanının yerine geçer. Ve artık ilk eleman haline gelir. |
| rrr | rra ve rrb -> rra ve rrb talimatları aynı anda uygulanır. |

## Zorunlu Kısım 
 ✺  İstenilen algoritma seçilebilecektir. a ve b isimli 2 yığın olacaktır. Başlangıç da a yığını rastgele sayıda birbirinin kopyası olmayan negative veya pozitif
sayıdan oluşmaktadır. b yığını boştur.
 ✺  Amacımız yığında küçükten büyüğe artan şekilde sıralama yapmaktır. Ve yığını mümkün olan en az sayıda hamleyle sıralamaktır.
 ✺  Hata alma durumlarında yani aynı sayı gelme, int max değerini aşımı ve sayıdan farklı bir durum oluştuğunda ekrana Error mesajı bastırılmalıdır.

# Örnek

<img width="520" alt="Ekran Resmi 2023-11-08 16 49 21" src="https://github.com/facetint/push_swap/assets/99668549/0c9a303c-1786-40a0-99ca-579212521a86">

## Bonus 🌟
 ✺ Bir checker programı yapılacaktır.
 ✺ Checker çıktıdaki ’\n’ i takip edip satır satır okuyarak talimatların doğru olup olmadığına bakar. 
 ✺ Tüm talimatlar okunup kıyaslama yapıldıktan sonra, Ctrl + D ye bastıktan sonra eğer talimatlar doğru ise OK, yanlış ise KO yazısı bastırmalıdır.
 ✺ Hata alma durumlarında yani aynı sayı gelme, int max değerini aşımı ve sayıdan farklı bir durum oluştuğunda ekrana Error mesajı bastırılmalıdır.

# Örnek


 <img width="520" alt="Ekran Resmi 2023-11-08 17 00 18" src="https://github.com/facetint/push_swap/assets/99668549/ca192da9-64e5-464b-b9f0-2fec9b279bca">

--------------------------------------------------------------------------------------------------------------------------------------------

 <img width="679" alt="Ekran Resmi 2023-11-08 17 01 55" src="https://github.com/facetint/push_swap/assets/99668549/ad6aa33d-1c4f-4140-98ad-570e9920fa65">

# SIRALAMA ALGORİTMALARI

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quicksort
- Counting Sort
- Radix Sort
- Bucket Sort
- Heap Sort
- Shell Sort

1) Bubble Sort : Bu algoritmada, soldan ilerleyin ve bitişik elemanları karşılaştırın; daha yüksek olan sağ tarafa yerleştirilir. Bu şekilde ilk önce en büyük eleman en sağdaki uca taşınır. Daha sonra bu işleme ikinci en büyük olanı bulmak ve yerleştirmek için devam edilir ve veriler sıralanana kadar bu şekilde devam eder.

2) Selection Sort : Listenin sıralanmamış kısmından en küçük (veya en büyük) öğeyi tekrar tekrar seçer ve onu sıralanmamış bölümün ilk öğesiyle değiştirir. Bu işlem, listenin tamamı sıralanıncaya kadar kalan sıralanmamış kısım için tekrarlanır.

3) Insertion Sort : Elinizdeki oyun kartlarını sıralama şeklinize benzer şekilde çalışan basit bir sıralama algoritmasıdır. Dizi neredeyse sıralanmış ve sıralanmamış bir parçaya bölünmüştür. Sıralanmamış kısımdan değerler alınır ve sıralanmış kısımda doğru konuma yerleştirilir.

4) Merge Sort : Bir diziyi daha küçük alt dizilere bölerek, her bir alt diziyi sıralayarak ve ardından sıralanan alt dizileri son sıralanmış diziyi oluşturmak için yeniden birleştirerek çalışan bir sıralama algoritması olarak tanımlanır.

5) Counting Sort : Sınırlı sayıda giriş değeri olduğunda iyi çalışan, karşılaştırmaya dayalı olmayan bir sıralama algoritmasıdır. Girdi değerleri aralığı, sıralanacak öğelerin sayısıyla karşılaştırıldığında küçük olduğunda özellikle verimlidir. Sayarak Sıralamanın ardındaki temel fikir, giriş dizisindeki her bir farklı öğenin sıklığını saymak ve bu bilgiyi, öğeleri doğru sıralanmış konumlarına yerleştirmek için kullanmaktır.

6) Radix Sort : Öğeleri basamak basamak işleyerek sıralayan doğrusal bir sıralama algoritmasıdır. Sabit boyutlu tuşlara sahip tamsayılar veya dizeler için etkili bir sıralama algoritmasıdır.

7) Bucket Sort : Öğeleri çeşitli gruplara veya kovalara bölmeyi içeren bir sıralama tekniğidir. Bu kovalar elemanların eşit şekilde dağıtılmasıyla oluşturulur. Öğeler gruplara bölündükten sonra başka herhangi bir sıralama algoritması kullanılarak sıralanabilirler. Son olarak, sıralanan öğeler düzenli bir şekilde bir araya getirilir.

8) Heap Sort : İkili Yığın veri yapısına dayalı, karşılaştırmaya dayalı bir sıralama tekniğidir . Bu , ilk olarak minimum elemanı bulduğumuz ve minimum elemanı başlangıca yerleştirdiğimiz seçim sıralamasına benzer . Geriye kalan elemanlar için de aynı işlemi tekrarlayın.

9) Shell Sort : Kabuk sıralaması esas olarak Ekleme Sıralaması'nın bir çeşididir . Eklemeli sıralamada elemanları yalnızca bir konum ileriye taşırız. Bir öğenin çok ileriye taşınması gerektiğinde birçok hareket söz konusu olur. ShellSort'un fikri uzaktaki öğelerin alışverişine izin vermektir. Kabuk sıralamasında, diziyi büyük bir h değeri için h sıralamasına göre yaparız. h'nin değerini 1 olana kadar düşürmeye devam ediyoruz. Her h'inci elemanın tüm alt listeleri sıralanıyorsa, bir dizinin h-sıralı olduğu söylenir.

10) Quicksort :  bir öğeyi pivot olarak seçen ve pivotu sıralanan dizide doğru konuma yerleştirerek verilen diziyi seçilen pivot etrafında bölen , Böl ve Fethet algoritmasını temel alan bir sıralama algoritmasıdır .

Algoritma çeşitlerinden ben quicksort algoritmasını seçtim.

##  Quicksort Algoritması Nasıl Çalışır ?

<img width="576" alt="Ekran Resmi 2023-11-08 17 45 56" src="https://github.com/facetint/push_swap/assets/99668549/b3e0d11f-7427-47bb-8543-e8bab4a3c5a6">



Algoritma adımları şu şekilde özetlenebilir:

1- Diziden herhangi bir elemanı pivot(kilit) eleman olarak seçer.
2- Diziyi, pivot elemandan küçük olan bütün elemanlar pivot elemanın önüne, pivot elemandan büyük olan bütün elemanlar pivot elemanın arkasına gelecek biçimde düzenler.
3- Pivot elemana eşit olan sayılar sıralamanın küçükten büyüğe ya da büyükten küçüğe olmasına bağlı olarak pivot elemanın her iki tarafına da geçebilir.
4- Quicksort algoritması özyineli(recursive) çağrılarak, oluşan küçük diziler tekrar sıralanır.
5- Algoritma eleman sayısı sıfır olan bir alt diziye ulaşana kadar bu işlem devam eder.
6- Eleman sayısı sıfır olan bir alt diziye ulaşıldığında algoritma bu dizinin sıralanmış olduğunu varsayar ve sıralama işlemi tamamlanmış olur.
  
Pivot seçimi : Pivot seçmenin 4 yaygın yolu vardır. Aşağıdaki yöntemlerden herhangi biri kullanılabilir:

1- İlk öğeyi seç
2- Son öğeyi seç
3- Rastgele bir öğe seç
4- Ortanca elemanı seç
Bu proje de biz ortanca elemanı pivot olarak seçtik. Sebebi daha az hamlede sıralamayı yapmak istediğimiz için.

‼️ En iyi durumda n\log n şeklindedir.


