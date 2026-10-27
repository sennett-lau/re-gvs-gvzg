# Pinned upstream source

`ps2-web-recomp/` contains unmodified source from upstream commit `6526f4803d98e10de50bea3af104a4d26e9df033`. The selection contains the compiler, runtime, hosts, CMake helpers and ISO reader. It does not contain Git history, SDK binaries or a disc.

[manifest.json](manifest.json) records the exact upstream URL, revision and SHA-256 for every selected file. Preserve the original [MIT license](ps2-web-recomp/LICENSE).

The build copies this snapshot into ignored local output, then applies the explicit patches in `patches/`. Edit a patch or the game-specific layer rather than modifying the vendor pin in place.
