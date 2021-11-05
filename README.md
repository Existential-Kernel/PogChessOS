<p align="center">
    <img src="assets/banner.jpg" alt="PogChessOS"><br>
    <img alt="GitHub last commit" align="center" src="https://img.shields.io/github/last-commit/existential-nonce/passgen">
    <img alt="GitHub code size in bytes" align="center" src="https://img.shields.io/github/languages/code-size/existential-nonce/passgen">
    <a href="https://www.codefactor.io/repository/github/existential-nonce/pogchess"><img alt="codefactor" align="center" src="https://www.codefactor.io/repository/github/existential-nonce/pogchess/badge?s=21c9d17dad3405b1a8947910ddd6fe5a3dfab838"></a>
    <img alt="lines of code" align="center" src="https://img.shields.io/tokei/lines/github/Existential-nonce/PogChessOS">
    <img alt="GitHub" align="center" src="https://img.shields.io/github/license/existential-nonce/passgen">
</p>
<p align="center">A custom 32-bit Operating System kernel that can only play chess</p>

- - -

## Features
- Chess engine in C++
- Engine ELO configuration up to x elo
- Full CLI as the UI
- Working .iso file
- Custom bootstraper

- - - 

## Demo
(add gif of the CLI demonstration in the future)

- - -

## Prerequesites
| `Software` | `Download link` | `Required` | `Notes` |
|---|---|---|---|
| **Git** | https://git-scm.com/downloads | ![](assets/README/maybe.png) | You can either download it using git or by downloading a [zip version](https://github.com/Existential-nonce/PogChess/archive/refs/heads/main.zip) of the repository |
| **CMake** | https://cmake.org/download/ | ![](assets/README/check.png) | Required for building the entire code
| **QEMU** |---|---|---|

- - -

## Download
```bash
git clone https://github.com/Existential-nonce/PogChess.git
```

- - -

## Install

<details>
    <summary>   
        <b>Linux:</b>
    </summary>
    Make sure to update your system depending on your OS:

    #### Debian/Ubuntu
    ```bash
    $ sudo apt-get update -y && sudo apt-get upgrade -y
    ```

    #### RHEL Fedora/CentOS/Red Hat
    ```bash
    $ sudo yum update -y && sudo yum upgrade -y
    ```

    #### OpenSuse/Suse Linux
    ```bash
    $ sudo zypper update -y && sudo zypper refresh -y
    ```

    #### Arch
    ```bash
    $ sudo pacman -Syu
    ```

    After updating and upgrading, do:
    ```bash
    chmod +x PogChess
    cd PogChess
    sudo make
    ```
</details>

<details>
    <summary>
        <b>Windows:</b>
    </summary>



</details>

<details>
    <summary>
        <b>Mac OS:</b>
    </summary>
    ==== Untested for now ====
    
</details>

- - -

## Docs 
If you want to read about the process of the kernel, the intentions I had, the algorithm used for the engine, etc... Please read the [documentation](https://github.com/Existential-nonce/PogChess/blob/main/docs/Documentation.md) for this project.

- - -

### Resources used:
* https://www.youtube.com/playlist?list=PLZ1QII7yudbc-Ky058TEaOstZHVbT-2hg
* https://www.chessprogramming.org/
* https://wiki.osdev.org/

- - -

### Contributing
Before creating an issue, please ensure that it hasn't already been reported/suggested, and double-check the documentation.
See the [Contribution Guidelines](https://github.com/Existential-nonce/PogChess/blob/main/CONTRIBUTING.md) if you'd like to submit a PR.

- - -

### License 
Licensed by [MIT](https://github.com/Existential-nonce/PogChess/blob/main/LICENSE)
