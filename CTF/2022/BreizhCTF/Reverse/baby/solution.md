# [BreizhCTF - 2022 ] Baby

By C0000005


    Description:
    Le reverse c'est quand même vachement compliqué... ou pas ?

    Auteur: Worty

    Format : BZHCTF{}

    File: baby

## Reconnaissance

We got a file named baby. Let's find out what is this file ?
With the magic command file, we can determine file type, let's run it on our baby.

`$ C0000005@linux ~> file baby`

The command return :
```
baby: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=80943b655fe146edf8017475438d75d4f362f06e, for GNU/Linux 4.4.0, not stripped
```

Now we know that it's an ELF. Let's reverse it !

## Analyse

Since the file is named baby, it's must be an easy reverse, so it's i think useless to run it directrly in radare2 or IDA.

Let's run strings on it and grep with the flag format. 

`$ C0000005@linux ~> strings baby | grep "BZH"`

And the output is... The flag !! 

```
BZHCTF{b4by_r3_f0r_y0u_g00d_luck!!}
```


