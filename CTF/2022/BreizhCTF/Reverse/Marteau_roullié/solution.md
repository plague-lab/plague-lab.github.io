# [BreizhCTF - 2022]  Marteau rouillé, néanmoins plutôt rapide

By C0000005 with the help of LNK0

    Description:
    A cause de son stagiaire Julien, la DSI s'est encore pris un ransomware !
    (C'est la troisième fois à cause de lui)
    Ce fichier était très important, mais est maintenant inutilisable..
    Si seulement quelqu'un arrivait à le déchiffrer !

    Auteur: iHuggsy

    Format : BZHCTF{}

    File : target_release_rustyHammer
           important.enc

We must be REALLY carefull, i've already encrypted my whole machine in RSA-2048 during a CTF cause i was too sleepy. 

## Reconnaissance 

We got 2 files, one seems to be the ransomware, and the other is the important file that we most recover in order to get our precious flag.


Let's first, look a our important file. It looks like this :
`?{??Ɠ?"^#??????^???ֳ??~9??Dz??⏎ `

Well okay not helping.


Let's now look at the ransomware, i'm already scared cause i read Rust in the name, and even if Rust is a realy beautifull language, it's not fun to reverse, not fun at all.

Let's start, usual stuff, lets go for a file.

`target_release_rustyHammer: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=9755aa76eb54f28c0bb6c9db4685d603a6f46955, for GNU/Linux 4.4.0, with debug_info, not stripped`

Well we are lucky, there is debug_info and binarry is not stripped. So let's go for IDA. In the first time. 

