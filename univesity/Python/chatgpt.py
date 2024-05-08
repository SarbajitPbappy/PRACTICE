def response(message):
        greetings = ['hi', 'hello', 'hey', 'hola']
        if message.lower() in greetings:
            return "Hi! What can I do now?"
        elif "know me" in message.lower():
            return f"You are from Daffodil International University. You are currently studying in 5th semester"
        elif "thanks" in message.lower() or "thank" in message.lower():
            return "Thanks for your gratitude"
        else:
            return "Sorry! I don't understand your message"
while True:
    message = input("You: ")
    if message.lower() == "exit":
        print("ChatGpt: Bye! Have a nice day")
        break
    print("ChatGpt:", response(message))