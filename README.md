<p align="center">
    <img src="assets/banner.jpg" alt="PogChess"><br>
    <img alt="GitHub last commit" align="center" src="https://img.shields.io/github/last-commit/existential-nonce/passgen">
    <img alt="GitHub code size in bytes" align="center" src="https://img.shields.io/github/languages/code-size/existential-nonce/passgen">
    <img alt="GitHub" align="center" src="https://img.shields.io/github/license/existential-nonce/passgen">
    <img alt="Downloads" align="center" src="https://img.shields.io/github/downloads/Existential-nonce/PogChess/total.svg?label=downloads%20%28since%202019%29&style=flat-square"
    /chocolatey/v/:packageName
    /github/v/release/:user/:repo?display_name=tag&sort=semver


</p>
<p align="center">A CLI chess engine made with C++</p>


## Demo
(add gif of the CLI demonstration in the future)


## Prerequesites
| `Software` | `Download link` | `Required` | `Notes` |
|---|---|---|---|
| **Git** | https://git-scm.com/downloads | ![](assets/README/maybe.png) | You can either download it using git or by downloading a [zip version](https://github.com/Existential-nonce/PogChess/archive/refs/heads/main.zip) of the repository |
| **CMake** | https://cmake.org/download/ | ![](assets/README/check.png) | Required for building the entire code


## Download
```bash
git clone https://github.com/Existential-nonce/PogChess.git
```


## Install

### Linux
Make sure to update your system depending on your OS:

#### Debian/Ubuntu
```bash
$ sudo apt-get update -y && sudo apt-get upgrade -y
```

#### RHEL Fedora/CentOS/Red Hat/
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





### Windows
**Option 1:**
You can download Linux distributions from the microsoft store. If the box is ticked, that means the distro was tested and capable of running PogChess:
- [ ] [Ubuntu](https://www.microsoft.com/en-us/store/p/ubuntu/9nblggh4msv6)
- [ ] [Debian]()
- [ ] [CentOS]()
- [ ] [Fedora]


**Option 2:**
You can install the 
With PowerShell, you must ensure Get-ExecutionPolicy is not Restricted. We suggest using Bypass to bypass the policy to get things installed or AllSigned for quite a bit more security. Run `Get-ExecutionPolicy`. If it returns Restricted, then run `Set-ExecutionPolicy AllSigned` or `Set-ExecutionPolicy Bypass -Scope Process`. Next, run the following command:
```powershell
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

### MAC OS
==== Untested for now ====


## Docs 
Please read the [documentation](https://github.com/Existential-nonce/PogChess/blob/main/docs/Documentation.md) to read about the process of the project, the intentions I had, the algorithm used for the engine, etc... The documentation was specifically designed for my highschool programming project for my A level CS class.

### Credits and Resources:
* https://www.youtube.com/playlist?list=PLZ1QII7yudbc-Ky058TEaOstZHVbT-2hg
* https://www.chessprogramming.org/


### Contributing
Before creating an issue, please ensure that it hasn't already been reported/suggested, and double-check the documentation.
See the [Contribution Guidelines](https://github.com/Existential-nonce/PogChess/blob/main/CONTRIBUTING.md) if you'd like to submit a PR.


### License 
Licensed by [MIT](https://github.com/Existential-nonce/PogChess/blob/main/LICENSE)