# Game inputs and eventual setup

The research target is the Japanese PS2 release of [Mobile Suit Gundam: Gundam vs. Zeta Gundam](https://en.wikipedia.org/wiki/Mobile_Suit_Gundam:_Gundam_vs._Zeta_Gundam). Its serial is `SLPS-25419`, and its executable CRC is `435D8236`. The retained main executable SHA-256 is recorded in `upstream.lock`.

The current game workspace uses an extracted main ELF, 325 MWo3 modules from `AFS_DATA.AFS`, recorded VU programs, and a full local disc image. These are different inputs; generated C++ or the small data package does not replace all runtime disc access.

The eventual user flow is to obtain a matched web package, provide a supported disc image locally, and start the accompanying game server. The existing server exposes that local image at `/disc.iso` with byte-range support. The repository will not contain the ISO, ROM or compressed backup. A browser-local file picker would be a later improvement, not an implemented feature of this report snapshot.

Serving the game online requires HTTPS, the runtime's isolation headers, supported browser features and appropriate disc access. The Wiki is a separate static reader and needs none of the game's runtime services. Multiplayer signaling and TURN are additional services, separate from static article hosting.

No game launch command is promised by this documentation-only checkout. A clean-machine setup check and an explicit package manifest must accompany the future game export. See [chapter 02](chapters/02-browser-port.md) for the retained boot evidence and its limits.
