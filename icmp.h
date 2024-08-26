#pragma once

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>          //содержит функции для работы с системными вызовами на языке программирования C.
#include <sys/socket.h>      //для работы с сокетами
#include <netinet/ip.h>      //для работы с сокетами и отправки/получения данных по сети с
#include <netinet/ip_icmp.h> //определения и объявления структур и функций, необходимых для работы с сообщениями (ICMP),
#include <arpa/inet.h>       //объявления функций для преобразования сетевых адресов(для функции inet_pton)