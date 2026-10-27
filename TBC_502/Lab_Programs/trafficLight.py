class TrafficLightAgent:
    def __init__(self):
        self.state = "Red"

    def perceive(self, action):
        if action == "Go":
            self.state = "Green"
        elif action == "Wait":
            self.state = "Yellow"
        elif action == "Stop":
            self.state = "Red"

    def status(self):
        return f"Traffic light is {self.state}"


agent = TrafficLightAgent()
print(agent.status())
agent.perceive("Go")  # Changes to Green
print(agent.status())
agent.perceive("Wait")  # Changes to Yellow
print(agent.status())
agent.perceive("Stop")  # Changes to Red
print(agent.status())
