Tl:Dr- Watch the video to learn everything:
[![Watch the video](https://github.com/user-attachments/assets/71913b4b-dedb-44c7-9eda-f15a186d8e78)](https://youtu.be/mlaZyygO6lI)




# MouseJiggler
This is a project that I have created to circumvent iOS USB Restrict Mode and inactivity lock.

So, a big concern for us as examiners is all the stuff Apple is doing to break our exploits from our forensics tools (Think USB Restrict Mode being activated within an hour, and phone restarting after 72 hours if they have not been unlocked.) This is hardly time for us to get a warrant approved. But what if there was a way that we could fix this.

# USB Restrice Mode:
https://support.apple.com/en-us/111806

# Inactivity Reboot:
https://www.magnetforensics.com/blog/understanding-the-security-impacts-of-ios-18s-inactivity-reboot/

A buddy and I were discussing and came up with a concept- What if I put a mouse jiggler into a phone. Natively Android support mouse input. What about iOS devices? The answer: By enabling AssistiveTouch we can plug in a mouse, or in our case a mouse jiggler. 

The problem my buddy and I found is that most USB mouse jigglers move the mouse often enough to keep a computer awake, but not enough to keep a phone awake. But what can keep a phone awake? A mouse jiggler built into a flipper. This function allows you to control the time duration between mouse movement but thats not reasonable to spend 170 on a device, which can be scruitinized by the courts. So my solution?

Ordered some AtTiny85 USB PCB boards, program and develop my own USB Mouse Jiggler that I can specify the duration to wiggle the "mouse" on to keep a phone awake- and cost considerably less than a Flipper Zero (around 5 dollars or less).  

These are the HID devices<br>

https://www.amazon.com/dp/B0836WXQQR?smid=A2Z10KY0342329&ref_=chk_typ_imgToDp&th=1

<br>being used with these accessory adapters,

https://www.amazon.com/dp/B0DB7GHCQB?ref=ppx_yo2ov_dt_b_fed_asin_title or <br>

https://www.amazon.com/Certified-Lightning-Charging-Portable-Compatible/dp/B0CYC9JZBR/ref=pd_bxgy_d_sccl_1/132-9867293-0607660?pd_rd_w=PmQFd&content-id=amzn1.sym.de9a1315-b9df-4c24-863c-7afcb2e4cc0a&pf_rd_p=de9a1315-b9df-4c24-863c-7afcb2e4cc0a&pf_rd_r=APDFXS8GRFXW93F6P2M2&pd_rd_wg=PVpLq&pd_rd_r=f28e32da-135a-47ae-b367-ff1d001e58a6&pd_rd_i=B0CYC9JZBR&th=1

and a battery pack.

Cool, but if a phone is locked how do I do this.

My suggestion is, compel biometrics. In many jurisdictions courts have ruled that Biometrics are non-testimonial evidence and can therefore be compelled. Once the phone is unlocked and opened via biometrics on scene, we can start this process.

# Here is the scenario:
Phone is locked on scene of a search warrant.
Warrant authorizes the compelling of biometrics.
You unlock the suspect device via biometrics.
Navigate to <b>Settings>>Accessibility>>Touch
Turn on AssistiveTouch (NO PIN CODE REQUIRED)</b>
Plug in the appropriate USB accessory adapter (this allows the device to charge AND plug in the mouse jiggler)
BOOM! you do not lose USB restrict mode and the phone stays in an AFU state.


# Compelling of Biometrics Verbiage, big thank you to Senior Deputy District Attorney Cathee Hansen for this verbiage to add to warrants:

# AFFIDAVIT:
Based on training, experience, and general knowledge of human behavior in today’s society,
Your Affiant knows that most individuals own and possess a cellular telephone, and retain their
phones on their person or in their immediate possession. See Carpenter v. United States, 138 S.
Ct. 2206, 2218 (2018) (“While individuals regularly leave their vehicles, they compulsively
carry cell phones with them all the time. A cell phone faithfully follows its owner beyond public
thoroughfares and into private residences, doctor&#39;s offices, political headquarters, and other
potentially revealing locales.”); Riley v. California, 134 S.Ct. 2473, 2484 (2014) (“modern cell
phones [] are now such a pervasive and insistent part of daily life that the proverbial visitor from
Mars might conclude they were an important feature of human anatomy.”).
As such, it is likely that the residence and/or vehicle to be searched will contain at least one
digital device with biometric unlocking functionality, such as a smartphone or tablet. Your
Affiant know from his training and experience, as well as from information found in publicly
available materials including those published by device manufacturers, that some device models
offer their users the ability to unlock the device via the use of a fingerprint, thumbprint, or facial
recognition or iris scanning in lieu of a numeric or alphanumeric passcode or password.
If a user enables biometric unlocking on a given device, he or she can register multiple
fingerprints or their eyes and/or face to be used to unlock that device. The user can then employ
any of these registered biometric methods to unlock the device. In Your Affiant’s training and
experience, users with devices that offer biometric unlocking functionality often enable it
because it is considered to be a more convenient way to unlock the device than by entering a
numeric or alphanumeric passcode or password, as well as a more secure way to protect the
device’s contents. This is particularly true when the user(s) of the device are engaged in criminal
activities and thus have a heightened concern about securing the contents of the device.
In some circumstances, biometric unlocking cannot be used to unlock a device, even where
biometric unlocking functionality has been enabled, and a passcode or password must be used
instead. These circumstances include, for example, when more than a preset amount of time has
passed since the last time the device was unlocked, or when the device has not been unlocked via
biometric unlocking in a preset amount of time and the passcode or password has not been
entered in a certain number of days.
Thus, in the event law enforcement encounters a locked mobile device, the opportunity to unlock
the device via biometric unlocking exists only for a short time. Biometric unlocking also will
not work to unlock the device if the device has been turned off or restarted, the device has
received a remote lock command, and/or a preset number of attempts to unlock the device via
biometric unlocking are made.
Any passcodes or passwords that would unlock any devices found during the search of the above
listed residence and/or vehicle are not currently known to law enforcement. Thus, it will likely
be necessary to press the finger(s) of the user of the device(s) found during the search to the
device’s biometric unlocking sensor or have the user(s) look into the iris scanner or device
camera in an attempt to unlock the device for the purpose of securing the device for a later

search, if one is deemed necessary. Attempting to unlock the device(s) via biometric unlocking
of the user is necessary because the government may not otherwise be able to access the data
contained on the device.
Based on Your Affiant’s training and experience, the person who is in possession of a device or
has the device among his or her belongings at the time the device is found is likely a user of the
device. However, also based on training and experience, Your Affiant knows that this person
may not be the only user of the device whose biometrics are among those that will unlock the
device, and it is also possible that the person in whose possession the device is found is not
actually a user of that device at all. Furthermore, in Your Affiant’s training and experience, it
may not be possible to know with certainty who is the user of a given device, such as if the
device is found in a common area of a premises without any identifying information on the
exterior of the device. Thus, it will likely be necessary for law enforcement to have the ability to
require any occupant of the residence being searched to press their finger(s) against the biometric
unlocking sensor or have them look into the iris scanner or device camera of the locked device(s)
found during the search in order to attempt to identify the device’s user(s) and unlock the
device(s) via biometric unlocking.
Due to the foregoing, Your Affiant requests that the Court authorize law enforcement to press the
fingers (including thumbs) of the occupants of the searched residence to the biometric unlocking
sensor of any locked device(s) found at the residence, or have them look into the iris scanner or
device camera of the locked device(s), for the purpose of attempting to unlock the device via
biometric unlocking functionality in order to secure the phone for a later search, if one is deemed
necessary.

# WARRANT:
During the execution of the search of the above listed residence and/or vehicle, law enforcement
personnel are authorized to press the fingers (including thumbs) of the occupants of such
locations to the biometric unlocking sensor of any device(s) found at that those locations, or have
them look into the iris scanner or device camera of the locked device(s), for the purpose of
attempting to unlock the device via biometric unlocking functionality in order to secure the
phone for a later search, if one is deemed necessary.


