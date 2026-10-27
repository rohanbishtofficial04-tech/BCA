class DoorAgent:
    def __init__ (self):
        self.locked=True
    def action (self,action):
        if action.lower()=="unlock":
            self.locked=False
        elif action.lower()=="lock":
            self.locked=True
    def status(self):
        return "Door is Locked" if self.locked==True else "Door is Unlocked"
agent = DoorAgent()
print(agent.status())       # Initial status (Locked)
agent.action("Unlock")      # Unlocks the door
print(agent.status())       # Shows updated status (Unlocked)
agent.action("Lock")        # Locks the door
print(agent.status())       # Shows updated status (Locked)


