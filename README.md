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
 
<img width="520" alt="Ekran Resmi 2023-11-08 16 49 21" src="https://github.com/facetint/push_swap/assets/99668549/0c9a303c-1786-40a0-99ca-579212521a86">

## Bonus 🌟
 ✺ Bir checker programı yapılacaktır.
 ✺ Checker çıktıdaki ’\n’ i takip edip satır satır okuyarak talimatların doğru olup olmadığına bakar. 
 ✺ Tüm talimatlar okunup kıyaslama yapıldıktan sonra, Ctrl + D ye bastıktan sonra eğer talimatlar doğru ise OK, yanlış ise KO yazısı bastırmalıdır.
 ✺ Hata alma durumlarında yani aynı sayı gelme, int max değerini aşımı ve sayıdan farklı bir durum oluştuğunda ekrana Error mesajı bastırılmalıdır.

🔴 <img width="520" alt="Ekran Resmi 2023-11-08 17 00 18" src="https://github.com/facetint/push_swap/assets/99668549/ca192da9-64e5-464b-b9f0-2fec9b279bca">

🔴 <img width="679" alt="Ekran Resmi 2023-11-08 17 01 55" src="https://github.com/facetint/push_swap/assets/99668549/ad6aa33d-1c4f-4140-98ad-570e9920fa65">


 
