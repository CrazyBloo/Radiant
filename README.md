Installing Mods
============

Make a folder called "Mods" in the IntoTheRadius/Content/Paks folder and place your mod .pak files in there.
Open Radiant before launching your game.

Making Mods
============

!! You must use an Unreal Engine 4.27.x version, 4.27.2 works fine.

Create a new Blueprint Project called IntoTheRadius (it must be called IntoTheRadius to work), choose no starter content

![image](https://user-images.githubusercontent.com/16051822/213894660-69d3e01e-4ecc-4b35-991e-f53914badb25.png)

Create a new folder for your mod, and inside make a new blueprint actor called ModActor.

![modactor](https://user-images.githubusercontent.com/16051822/213894844-1ba7b999-9b97-4b68-9dd3-73fa4d8e7941.png)

Inside the Event Graph of your ModActor, Right Click and Add Custom Event and name it OnModLoaded, make another event and call it EngineTick

![image](https://user-images.githubusercontent.com/16051822/213894921-115bc386-177a-4972-98ff-0eaea8dfe843.png)

Now you want to go into your Editor Preferences, then search "chunk" and enable allow ChunkID assignments

![image](https://user-images.githubusercontent.com/16051822/213895198-d170ced8-8447-4af0-b5c0-d6b44cb3f4ce.png)

Now in Project Settings, click Packaging on the left and enable Generate Chunks

![image](https://user-images.githubusercontent.com/16051822/213895219-56fc867e-1b18-4138-92b3-826fb00c69e7.png)

Select all assets required by your mod (unless they are dummy bp's) and Right Click->Asset Actions->Assign to chunk and assign them to a number you'll remember.
Now you can package your project, and in your compiled content/paks folder one of the .pak files names will have your chunk number in it.

![image](https://user-images.githubusercontent.com/16051822/213895329-078fea28-efee-4316-a5e6-45131d89087d.png)

You MUST rename this to the name of the folder you put your mod actor in earlier so the mod loader can find it,
my folder was Radiant-Mod so the file will be Radiant-Mod.pak

![image](https://user-images.githubusercontent.com/16051822/213901257-074ea366-5d91-445b-b504-460c4589bfeb.png)

Now in the game's files make a folder called "Mods" in the IntoTheRadius/Content/Paks/ and place your mod there
