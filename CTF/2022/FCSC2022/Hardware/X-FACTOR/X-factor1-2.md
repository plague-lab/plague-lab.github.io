# [FCSC - 2022] X-Factor 1 / 2 



    Catégorie : Misc 
    
    Difficulté : Facile

    Description :

    Un commanditaire vous a demandé de récupérer les données ultra secrètes d'une entreprise concurrente. Vous avez tenté plusieurs approches de recherche de vulnérabilités sur les serveurs exposés qui se sont malheureusement révélées infructueuses : les serveurs de l'entreprise ont l'air solides et bien protégés. L'intrusion physique dans les locaux paraît complexe vu tous les badges d'accès nécessaires et les caméras de surveillance.

    Une possibilité réside dans l'accès distant qu'ont les employés de l'entreprise à leur portail de travail collaboratif : l'accès à celui-ci se fait via deux facteurs d'authentification, un mot de passe ainsi qu'un token physique à brancher sur l'USB avec reconnaissance biométrique d'empreinte digitale. Même en cas de vol de celui-ci, il sera difficile de l'exploiter. Installer un malware evil maid sur un laptop de l'entreprise n'est pas une option : ceux-ci sont très bien protégés avec du secure boot via TPM, et du chiffrement de disque faisant usage du token.

    Mais tout espoir n'est pas perdu ! Vous profitez du voyage en train d'un des employés et de sa fugace absence au wagon bar pour brancher discrètement un sniffer USB miniaturisé sur le laptop. Vous glissez aussi une caméra cachée au dessus de son siège qui n'a pu capturer que quelques secondes. Vous récupérez la caméra et le sniffer furtivement après sa séance de travail : saurez-vous exploiter les données collectées pour mener à bien votre contrat ?

    Pour obtenir le flag de X-Factor 1/2, vous devez vous logguer avec login et mot de passe. Puis avec le deuxième facteur d'authentification pour obtenir le flag pour X-Factor 2/2.

    Fichiers :  - capture_USB.pcapng
                - login_password.mkv



## Reconnaissance 

Le challenge est accompagné de deux fichiers, le premier est une capture des paquets d'un échange usb, le deuxième est une capture vidéo de l'écran de l'employé. Dans la vidéo, il y a une interface de connexion vers le site https://x-factor.france-cybersecurity-challenge.fr, de plus, on voit la saisie d'un id & d'un mot de passe. 


## Récupération du mot de passe


C'est assez simple, on prend VLC, on uvre le .MKV. Puis on avance image par image pour extraire le mot de passe.
Ça donne :  jesuishpyersecret2022




