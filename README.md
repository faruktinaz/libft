## About

> <mark style="background: #D2B3FFA6;">-EN-</mark>  The purpose of this project is to re-code some libc functions, as well as other common utility functions to be reused in the subsequent 42 projects.
> 
> <mark style="background: #D2B3FFA6;">-TR-</mark> Bu projenin amacı, sonraki 42 projelerinde de kullanılmak üzere libc fonksiyonlarının işlevlerini ve diğer yardımcı fonksiyonlari yeniden kodlamaktır.

## strlen

``` c
size_t ft_strlen(const char *str)
```

'strlen' foksiyonu girilen char parametresininin <mark style="background: #CACFD9A6;">uzunlugunu</mark> döndürür.

-------------------------------------------------------------
## bzero

bzero fonksiyonu, bir bellek alanını sıfırlamak için kullanılır.

```c
void bzero(void *s, size_t n);
```

Bu fonksiyon, bir bellek alanının adresini `s` parametresiyle ve bu alanın uzunluğunu `n` parametresiyle verir. Bu fonksiyon çalıştırıldığında, verilen bellek alanındaki tüm değerler `0` olarak ayarlanır.

-------------------------------------------------------------------------
## memcpy

memcpy fonksiyonu, bir bellek alanının içeriğini başka bir bellek alanına kopyalamak için kullanılır.

```c
void *memcpy(void *dest, const void *src, size_t n);
```

Bu fonksiyon, kopyalanacak verinin bulunduğu bellek alanının adresini <mark style="background: #CACFD9A6;">src</mark> parametresiyle, kopyalanacak verinin kopyalanacağı bellek alanının adresini <mark style="background: #CACFD9A6;">dest</mark> parametresiyle ve kopyalanacak verinin uzunluğunu <mark style="background: #CACFD9A6;">n</mark> parametresiyle verir. Bu fonksiyon çalıştırıldığında, verilen <mark style="background: #CACFD9A6;">src</mark> bellek alanındaki veri, verilen <mark style="background: #CACFD9A6;">dest</mark> bellek alanına kopyalanır.

Örnek olarak, aşağıdaki kod parçacığında, <mark style="background: #CACFD9A6;">src</mark> adlı dizinin ilk 10 elemanı, <mark style="background: #CACFD9A6;">dest</mark> adlı dizinin ilk 10 elemanına kopyalanır:

```c
char src[100];
char dest[100];
memcpy(dest, src, 10);
```

__memcpy fonksiyonu, veri kopyalamak için hızlı bir yöntemdir, ancak dikkat edilmesi gereken bir nokta vardır: memcpy fonksiyonu, verinin kopyalanacağı alan ile verinin bulunduğu alanın aynı olması durumunda, doğru sonuç verememektedir. Bu durumda, memmove fonksiyonunun kullanılması daha uygun olacaktır.__

--------------------------------------------------------
## memmove 

memmove fonksiyonu, bir bellek alanının içeriğini başka bir bellek alanına kopyalamak için kullanılır.

```c
void *memmove(void *dest, const void *src, size_t n);
```

Bu fonksiyon, kopyalanacak verinin bulunduğu bellek alanının adresini <mark style="background: #CACFD9A6;">src</mark> parametresiyle, kopyalanacak verinin kopyalanacağı bellek alanının adresini <mark style="background: #CACFD9A6;">dest</mark> parametresiyle ve kopyalanacak verinin uzunluğunu <mark style="background: #CACFD9A6;">n</mark> parametresiyle verir. Bu fonksiyon çalıştırıldığında, verilen <mark style="background: #CACFD9A6;">src</mark> bellek alanındaki veri, verilen <mark style="background: #CACFD9A6;">dest</mark> bellek alanına kopyalanır.

__memmove fonksiyonu, veri kopyalamak için hızlı bir yöntemdir ve memcpy fonksiyonuna göre daha esnektir. Özellikle, verinin kopyalanacağı alan ile verinin bulunduğu alanın aynı olması durumunda, memmove fonksiyonu doğru sonuç verebilir, ancak memcpy fonksiyonu bu durumda doğru sonuç veremeyebilir. Bu nedenle, verinin kopyalanacağı alan ile verinin bulunduğu alanın aynı olma durumu düşünülürse, memmove fonksiyonunun kullanımı daha uygun olacaktır.__

Bu denilene bir örnek verelim:


```c
int main()

{
char str[] = "aabbcc";

ft_memcpy(str + 2, str , 4);

printf("%s\n", str);

char str2[] = "aabbcc";

ft_memmove(str2 + 2 , str2, 4);

printf("%s", str2);
}
```
bu kodun çıktısı:
			aaaaaa
			aaaabb
olur.

memcpy ve memmove fonksiyonları, bir bellek alanının içeriğini başka bir bellek alanına kopyalamak için kullanılırlar. Ancak, bu iki fonksiyon arasında önemli bir fark vardır:

-   memcpy fonksiyonu, verinin kopyalanacağı alan ile verinin bulunduğu alanın aynı olması durumunda, doğru sonuç veremeyebilir. Bu durumda, verinin bulunduğu alandaki veri, verinin kopyalanacağı alana kopyalanmadan önce sıfırlanabilir ve böylece doğru sonuç alınamaz.
    
-   memmove fonksiyonu ise, verinin kopyalanacağı alan ile verinin bulunduğu alanın aynı olması durumunda da doğru sonuç verebilir. Bu fonksiyon, verinin kopyalanacağı alana kopyalanmadan önce sıfırlamaz ve böylece verinin bulunduğu alandaki veri kaybolmaz.

--------------------------------------------------------
## memset

memset fonksiyonu, bir bellek alanını bir verilen değer ile doldurmak için kullanılır.

```c
void *memset(void *s, int c, size_t n);
```

Bu fonksiyon, bir bellek alanının adresini `s` parametresiyle, bellek alanını doldurmak istediğiniz değeri `c` parametresiyle ve bu alanın uzunluğunu `n` parametresiyle verir. Bu fonksiyon çalıştırıldığında, verilen bellek alanındaki tüm değerler `c` değeri olarak ayarlanır.

```c
void *ft_memset(void *dst, int src, size_t n);
```

'memset' fonksiyonu girilen dest parametresinin <mark style="background: #CACFD9A6;">bellekteki</mark> kısmını, belirtilen bir değer ile doldurmak için kullanılır.

Örnek olarak, aşağıdaki kod parçacığı bir dizinin tüm elemanlarını sıfırlar:

```c
int arr[10];
memset(arr, 0, sizeof(arr));
```

-------------------------------------------------------------
## strlcpy

```c
size_t ft_strlcpy(char *dst, const char *src, size_t size);
```

> 'strlcpy' fonksiyonu girilen <mark style="background: #CACFD9A6;">src</mark> parametresini <mark style="background: #CACFD9A6;">dest</mark> parametresine <mark style="background: #CACFD9A6;">size</mark> parametresi kadar kopyalanmasını sağlar.

-------------------------------------------------------------
## strlcat


```c
size_t ft_strlcat(char *dst, const char *src, size_t size);
```

'strlcat' fonksiyonu <mark style="background: #CACFD9A6;">dst</mark> parametresinin devamına <mark style="background: #CACFD9A6;">src</mark> parametresi ile <mark style="background: #CACFD9A6;">size</mark> kadar  birleştirilmesini sağlar.

-------------------------------------------------------------

## strjoin

strjoin fonksiyonu bir dizi veya liste içindeki öğeleri <mark style="background: #CACFD9A6;">birleştirerek</mark>  ___yeni___ bir metin dizesi oluşturur.

-------------------------------------------------------------
## split

split fonksiyonu girilen diznin tamamında aranan char karakterini bulup her buldugunda malloc ile oluşturulmuş bir listeye aktarılır.

sınırlayıcı olarak belirtilen karakterle bölme işlemini yapıp ayrılmış kelimeleri ayrı bir dizeye yerleştirir. 

bu fonksiyonu yazarken 2 static fonksiyona ihtiyaç duyulur.
1. static fonksiyon static int worldcounter(const char *s, char c)
2. static int charcounter 

| harici fonksiyonlar | malloc | free |

örnek olarak ;
```c
char *string = "   split     this  for me !    ";
char **expected = ((char *[6]){"split","this","for","me","!",NULL});
```

----------------------------------------------------

## strtrim

strtrim fonksiyonu bir dizinin içerisinde <mark style="background: #CACFD9A6;">başından ve sonundan</mark> kırpılacak harfleri kırpılmış şekilde malloc ile yer ayrılmış olan yeni bir diziye return edilir. 

-------------------------------------------------------------
## calloc

calloc fonksiyonu, bellekte belirli bir boyutta bir dizi oluşturmak için kullanılır. Bu fonksiyon, bellekte istenilen miktarda yer açar ve bu yerin tüm elemanlarını sıfır olarak ayarlar. Örneğin, aşağıdaki kod parçacığı, bellekte 10 elemanlı bir dizi oluşturur ve bu dizinin tüm elemanlarını sıfır olarak ayarlar:

```c
int *array = (int*) calloc(10, sizeof(int));
```

calloc fonksiyonu, iki parametre alır: ilki, oluşturulacak dizinin eleman sayısıdır ve ikincisi, her bir elemanın boyutudur (genellikle veri tipine göre sizeof operatörü kullanılarak belirlenir). Örneğin, yukarıdaki kod parçacığında, 10 elemanlı bir dizi oluşturulur ve her bir elemanın boyutu sizeof(int) yani 4 bayt olduğu için, toplamda 40 bayt bellek ayırılır.

calloc fonksiyonu, malloc fonksiyonundan farklı olarak, oluşturulan dizinin tüm elemanlarını sıfır olarak ayarlamakla birlikte aynı zamanda bellekte istenilen miktarda yer açar. Bu sayede, calloc fonksiyonu malloc fonksiyonuna göre daha güvenlidir, çünkü malloc fonksiyonu sadece bellekte yer açar ve bu yerin içeriğini değiştirmez, bu yüzden kullanıcının dizinin tüm elemanlarını ayrı ayrı sıfır olarak ayarlaması gerekir.

-----------------------------------------------------------------------------------------
## atoi

atoi(ascii to integer) fonksiyonu string ifadeyi integer değere çevirir.

```c
int ft_atoi(const char *str);
```

return değeri olarak integer bir değer döndürür.

------------------------------------------------------------------------
## substr

 substr() fonksiyonu, bir metnin belirli bir kısmını almak için kullanılır. Bu fonksiyonu kullanırken, bir dizge (veya metin) ve dizgenin hangi karakterlerinin alınacağını gösteren iki tane sayı girdisi vermeniz gerekir. İlk sayı, dizgenin hangi karakterinden başlayarak alınacağını gösterir ve ikinci sayı ise alınacak karakterlerin sayısını gösterir. Örneğin, aşağıdaki örnekte, <mark style="background: #CACFD9A6;">"merhaba dunya"</mark> dizgesinin <mark style="background: #CACFD9A6;">3'üncü karakterinden itibaren</mark> 4 adet karakter alınır:
 
```c
int main()
{
char string[] = "merhaba dunya!";
printf("%s", ft_substr(string,3,4));
}
```

Sonuç olarak, substring değişkeni <mark style="background: #CACFD9A6;">"haba"</mark> değerini alacaktır.

Karakter saymak 0. indeksten başlar ilk karakter 0, ikinci karakter 1, üçüncü karakter 2, vb.

-----------------------------------------------------------------------
## strdup

Dizinin bir kopyasını oluşturur ve oluşturulan kopyanın başlangıç adresini döndürür.

```c
char *ft_strdup(const char *s);
```


## strchr

```c
char *ft_strchr(const char *str, int c)
```

<mark style="background: #CACFD9A6;">"strchr"</mark> fonksiyonu, bir dizinin verilen bir karakteri ilk kez nerede bulunduğunu arar. Bu fonksiyon, bir dizi içinde verilen bir karakteri arar ve ilk bulduğu yerde dizinin adresini döndürür.Eğer verilen karakter dizide bulunamazsa, bu fonksiyon <mark style="background: #CACFD9A6;">"NULL"</mark> değerini döndürür.

## strrchr

```c
char *ft_strrchr(const char *s, int c)
```

"strrchr" fonksiyonu "strchr" fonkisyonunn yaptıgı işlevin aynısını tersten yapar.

## strncmp

```c
int ft_strncmp(const char *s1, const char *s2, size_t n)
```

"strncmp" fonksiyonu, iki dizinin verilen bir uzunluk kadar bölümünü karşılaştırır. Bu fonksiyon, iki dizinin verilen bir uzunluk kadar bölümünü karşılaştırır ve eğer diziler eşitse, 0 değerini, eğer ilk dizi büyükse, pozitif bir değer, eğer ikinci dizi büyükse ise negatif bir değer döndürür.

## memchr 

```c
void *ft_memchr(const void *str, int c, size_t n)
```

"memchr" fonksiyonu, verilen bir bellek alanının verilen bir karakteri ilk kez nerede bulunduğunu arar. İlk buldugu yerin bellek alanının adresini döndürür. Eğer verilen karakter bellek alanında bulunamazsa, bu fonksiyon "<mark style="background: #CACFD9A6;">NULL</mark>" değerini döndürür.
## memcmp

```c
void *ft_memchr(const void *str, int c, size_t n)
```

"memcmp" fonksiyonu, iki bellek alanının verilen bir uzunluk kadar bölümünü karşılaştırır. Bu fonksiyon, iki bellek alanının verilen bir uzunluk kadar bölümünü karşılaştırır ve eğer bellek alanları eşitse, 0 değerini, eğer ilk bellek alanı büyükse, pozitif değer, eğer ikinci bellek alanı büyükse negatif değer döndürür.

## statik ve dinamik fonksiyon nedir ?

Statik fonksiyonlar, derleme zamanında yüklenir ve çalışma zamanında değiştirilemez. Statik fonksiyonlar, genellikle programın çalışma zamanında çok az hafıza kullanır ve çalışma hızı yüksektir. Statik fonksiyonlar, çalışma zamanında değiştirilemeyen sabit değerler veya işlemler için kullanılır. Örneğin, bir fonksiyonun sadece bir tamsayı çarpımını gerçekleştirip geri döndürmesi gibi.

Dinamik fonksiyonlar ise, çalışma zamanında yüklenir ve değiştirilebilir. Dinamik fonksiyonlar, genellikle programın çalışma zamanında daha fazla hafıza kullanır ve çalışma hızı daha düşüktür. Dinamik fonksiyonlar, çalışma zamanında değiştirilebilen değerler veya işlemler için kullanılır. Örneğin, bir fonksiyonun kullanıcıdan alınan bir dizeyi ters çevirerek geri döndürmesi gibi.

Genellikle, statik fonksiyonlar daha hızlı çalışır ve daha az hafıza kullanır, ancak dinamik fonksiyonlar daha esnektir ve çalışma zamanında değiştirilebilir. Hangi tür fonksiyon kullanılması gerektiği, programın gereksinimlerine ve amaçlarına göre değişebilir.

