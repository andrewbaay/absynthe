
# Absynthe for Source
[![Build status](https://ci.appveyor.com/api/projects/status/xdn01yvakk8q49ek?svg=true)](https://ci.appveyor.com/project/gdianaty/absynthe)

After much procrastination and and two rewrites, here it is. The long-awaited Absynthe for Source. Absynthe's primary goal is to give you (the fantastic Source Engine community) the tools you need to make amazing things. Absynthe is designed so the user can simply drop a couple binaries into their source mod files and be up and running on-the-spot. No time spent compiling Visual Studio solutions, no time spent fighting with custom game binaries. It also supports Visual Studio 2019 and features the Keep Away from Fire Project Creator, an internal VPC modification used by Keep Away from Fire Software.

## Games
The following are either planned or already supported game titles.
### Games supported:
- Half-Life 2: Multiplayer **(VALVE)**
- Half-Life 2: Episode One **(VALVE)**
- Portal **(Rara)**
### Games to be supported:
- Half-Life 2 **(VALVE)**
- Half-Life 2: Episode Two **(VALVE)**
- Team Fortress 2 **([NickNine](https://github.com/NicknineTheEagle/))**
- Source Engine SDK Example **([Luna Ryuko](https://twitter.com/lunaryuko))**
- Half-Life: Source **(Graham Dianaty)**
## Graphics
And now, the thing you're all here for, the graphics. Unfortunately, the deferred rendering system is not present in this version of Absynthe, or any version of Absynthe. The deferred rendering system requires things to be changed that I can unfortunately not distribute the code for. However, the upcoming title [Boreal Alyph](https://kaffsoftware.com) will support my deferred rendering system.

The following are enhancements available to you or will be available in Absynthe:

- Global Lighting (real-time shadows from sky-box) **(Graham Dianaty)**
- Projected Textures without grain on edges. **(Graham Dianaty)**
- Parallax correction on specular/cube maps. **([Brian Charles](https://www.youtube.com/watch?v=ZH6s1hbwoQQ))**
- Horizon Based Ambient Occlusion **([Estranged](https://github.com/alanedwardes/Estranged-Act-1))**
- Depth of Field Blur **([Estranged](https://github.com/alanedwardes/Estranged-Act-1))**
- Water with flowmapped movement simulation. **(Graham Dianaty)**

The following are experimental, and is likely unstable:
- Physically Based Rendering **(Graham Dianaty & [thexa4](https://github.com/thexa4/source-pbr))**
