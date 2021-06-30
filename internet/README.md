# INTERNET

<br/>

> How did it work? I will use a story to explain it!

<br/>

 ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/1.internet.png)
 ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/2.internet.png)
  - [Description](Description)

# FIRST OF ALL

 > http protocol: Application 應用層 HTTP protocol is based on TCP.     //  應用層面，主要解決如何封裝資料。

 > TCP protocol: Transport 傳輸層.                                      // 顧名思義，解決如何在網路中傳輸的問題。

 > ip protocol: Internet 網路層.                                        // 網路層面，功能同上。

 > TCP/IP 稱為網際網路協議套組，這兩大家族組成網路基礎架構。

<br/>

 ### TCP/IP  

   TCP/IP Protocol Suite: <br/>

 > TCP/IP Provide point-to-point link mechanism（機制）.<br/>

 > 將資料應該如何封裝、定址、傳輸、路由以及在目的地如何接收，都加以標準化。<br/>

 #### OSI (Open System Interconnection Model)

 ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/osi.png)

<br/>

 通常人們認為OSI模型的最上面三層（應用層、表示層和會話層）在TCP/IP組中是一個應用層。
 > ip is also based on the network layer as a black box design.
 > So it is also reasonable as a layer.

 ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/osi2.png)

 <br>


 ## TCP (Transmission Control Protoco)

 1. 面向連接: <br/>

    面向連接代表雙方在交換數據時必須先建立連結。
    > 舉例:<br/>A撥打電話給B，A要等B聽到後接起，確認是A後才能溝通。
    > Example:<br/> A Dialing the phone to B, B should wait for B to hear, confirm that it is A to communicate.

 2. 基於字節流:<br/>
    TCP交換數據格式是字節(byte)組成的有序字節流。<br/>

    <p id = Description>用上面的故事做比喻:<br/></p>
    > 賣家買家互相通電 => TCP/ip &ensp; 三次握手，建立連接(connection establishment)。<br/>
    > 賣家打包 &ensp; &ensp; &ensp; &ensp; => TCP &ensp; 將無特殊格式的數據打包成 **報文段(segment)** ，<br/>
    > 賣家寄出 &ensp; &ensp; &ensp; &ensp; => IP(網路層) &ensp; 將數據報文封包成 **數據報(IP Datagram)** ，封包交換網路中最小的單位。 <br/>

    ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/osi3.png)

    > 物流中心 &ensp; &ensp; &ensp; &ensp; => 經過路由器網路傳輸到伺服器，接著IP從 _數據報(IP Datagram)_ ，拆分出TCP的 _報文段(segment)_ ，再還原成字節流給應用層。

 3. 可靠性:<br/>

 ## HTTP

 ## SOCKET